#include<iostream>
#include <string>
#include <vector>// �迭���� ���� 
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
    printf(" �ٸ� ����, �ٸ��� ������ �� �ִ� �ִ� ����, �� ���Ը� �Է��Ͻÿ� \n");
    scanf("%d %d %d", &length, &weight,&n);

    for(int i =0; i<n;i++){
        scanf("%d",&temp);
        v.push_back(temp);
    }

    
    cout << "return "<< solution(length,weight,v);
    
    
    
    return 0;
}