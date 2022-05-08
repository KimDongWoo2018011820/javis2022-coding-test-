#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int n,m,temp,i,j,index,count;
    deque<int> dq;
    vector<int> v;
    scanf("%d %d",&n, &m);
    for(i=0; i < n;i++ ) dq.push_back(i+1);

    for(i =0 ; i <m ; i++){
        scanf("%d", &temp);
        v.push_back(temp);
    }

    i =0;
    count =0;
    while(i< m){
        for(j =0; j<dq.size();j++){
            if(v[i]== dq[j]){
                index = j;
                break;
            }
        }

        if(index<=  dq.size()/2){
            for(j =0 ; j<index; j++){
                temp = dq.front();
                dq.pop_front();
                dq.push_back(temp);
                count++;
            }   
            dq.pop_front();
            i++;  
        }
        else{

            for(j =0 ; j< (dq.size()-index); j++){
                dq.push_front(dq.back());
                dq.pop_back();
                count++;
            }
            dq.pop_front();
             i++;  
        }
    }

    cout<<count<<endl;
    return 0;
}