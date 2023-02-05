
struct timestampnode {
    int time;
    char* value;
    struct timestampnode* next;
};


struct timemapnode {
    unsigned int key;
    struct timemapnode* nextkey;
    struct timestampnode* timestamp;
};


typedef struct timemapnode TimeMap;
typedef struct timestampnode TimeStamp;


unsigned int hashKey(char* key){
    unsigned int val = 0;
    int mod = pow(10,9) + 7; 
    while(*key){
        val = (val * 313 + (*key)) % mod;
        key++;
    }
    return val;
}

TimeMap* timeMapCreate() {
    TimeMap* head = malloc(sizeof(TimeMap));
    head->nextkey = NULL;
    head->timestamp = NULL;
    
    return head;
}

void timeMapSet(TimeMap* obj, char * key, char * value, int timestamp) {
    int hashed = hashKey(key); // hash the key
    TimeMap* iter = obj;

    while(iter && iter->nextkey && iter->nextkey->key >= hashed){
        iter = iter->nextkey;
    }
    
    if (!iter || (iter->key > hashed)){
        TimeMap* newNode = timeMapCreate();
        newNode->key = hashed;
		
        if (iter && iter->nextkey)
            newNode->nextkey = iter->nextkey;
        if (iter)
            iter->nextkey = newNode;
        
        iter = newNode;
    }
    

    TimeStamp* newstamp = malloc(sizeof(TimeStamp));
    newstamp->time = timestamp;
    newstamp->value = value;
	
    newstamp->next = iter->timestamp;
    iter->timestamp = newstamp;
    
    return;
}

char * timeMapGet(TimeMap* obj, char * key, int timestamp) {
    int hashed = hashKey(key); // hash the key
    TimeMap* iter = obj;

        iter = iter->nextkey;
    if (!iter || iter->key != hashed)
        return "";
    
    TimeStamp* titer = iter->timestamp;
    while(titer && titer->time > timestamp){
        titer = titer->next;
    }
    
    return titer ? titer->value : "";
}

void timeMapFree(TimeMap* obj) {
    TimeMap* tmi = obj;
    TimeStamp* tsi1; 
    TimeStamp* tsi2;
    
    while(obj){
        tmi = obj;
        obj = obj->nextkey;
        tsi1 = tmi->timestamp;
        while(tsi1){
            tsi2 = tsi1;
            tsi1 = tsi1->next;
            free(tsi2);
        }
        free(tmi);
    }
}