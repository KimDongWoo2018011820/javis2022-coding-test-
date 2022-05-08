#include <iostream>
#include <deque>
#include <vector>
using namespace std;


int main(){
    int n,i,temp,temp1,temp2;
    deque<int> dq ,v,s2,s3 ;
    vector<int> result;

    scanf("%d", &n);

    for(i = 0; i < n ; i++) dq.push_front(i+1); // 1 ~5 -> 5~1�� ���߼� ������ ������ ����
    
    
    for(i = 0; i < n ; i++){
        scanf("%d", &temp);
        v.push_back(temp);
    }

    while(!v.empty()){
        temp = v.front();
        v.pop_front();

        if(temp == 1 ){
            result.push_back(dq.front());
            dq.pop_front();
            while(!s2.empty()){
                result.push_back(s2.front());
                s2.pop_front();
            }
        }
        else if( temp ==2 && dq.size()!=1){// FIFO�� ����
            s2.push_back(dq.front());
            dq.pop_front();
        }

        else if( temp ==3 && dq.size()!=1){
            s3.push_back(dq.front());
            dq.pop_front();
        }
    }

    while(!s3.empty()){ /// LIFO
        result.push_back(s3.back());
        s3.pop_back();
    }



    for(i =0; i<result.size();i++) printf("%d ",result[i]);
    return 0;
}
