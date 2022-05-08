#include<iostream>
#include<deque>

using namespace std;
int main(){
    int n, d ,i,j,k, stride ,temp,max,sum;
    deque<int> dq;

    scanf("%d %d",&n, &d );
    for(i=0 ;i<n;i++){
        scanf("%d",&temp);
        dq.push_back(temp);
    }
    sum=i =0;
    while(i<n){
        temp = dq[i];
        if(temp>=0) {
            i++;
        }
        else{
            stride = i+d;
            max = dq[i];
            for(j = i; j<=stride;j++){
                if(k)
                
                if(dq[j] > max){
                    k= j;
                }
            }
            i = k;
            sum+= dq[i];
        }
        
    }
    



    return 0;
}