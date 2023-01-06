class Solution {
public:
int arr[265];
    int maxNumberOfBalloons(string text) {
        
        for(int i=0;i<text.size();i++)
            arr[text[i]]++;
        arr['l']/=2;
        arr['o']/=2;
        string texts="balloon";
        int small=arr['b'];
        for(int i=0;i<texts.size();i++){
            small=min(small,arr[texts[i]]);
        }
        return small;
    }
};