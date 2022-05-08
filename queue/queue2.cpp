#include<iostream>
#include <string>
#include <vector>// 배열같은 존재 
#include <queue>


using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0,sum, count,i,temp; 
    queue<int> q;
    
    i =0;
    while(1){
        if( truck_weights[i] > weight ){
            printf("This truck can'nt passed\n");
            return -1;
        }
        if(i == truck_weights.size()-1){
            answer += bridge_length+1;
            break;
        }

        ++answer;

        if( q.size()==truck_weights.size()){
            sum-= q.front();
            q.pop();

        }
        
        if(sum+truck_weights[i]<= weight){
            q.push(truck_weights[i++]);

        }
        else{
            q.push(0);
        }





    }
    
    
    
    return answer;
}
    
int main(){
    vector<int> v;
    int length, weight,n,temp;
    printf(" 다리 길이, 다리가 지탱할 수 있는 최대 무게, 차 무게를 입력하시오 \n");
    scanf("%d %d %d", &length, &weight,&n);

    for(int i =0; i<n;i++){
        scanf("%d",&temp);
        v.push_back(temp);
    }

    
    cout << "return "<< solution(length,weight,v);
    
    
    
    return 0;
}