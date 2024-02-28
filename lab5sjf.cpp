#include<bits/stdc++.h>
using namespace std;

int main(){

   cout << "sjf: " << endl;
   int bT[6],priority[6],waitT[6],turnA[6],sum = 0,sumA[6],avgW = 0,avgT = 0;
   vector<pair<int,int>> vp;
   waitT[0] = 0;turnA[0] = 0;sumA[0] = 0;
   freopen("input2.txt","r",stdin);
   for(int i = 0;i < 6;i++){
   	cin >> bT[i+1];
   }
   for(int i = 0;i <= 5;i++){
       vp.push_back({bT[i+1],i+1});
   }
   
   cout << "Vai age :" << endl;
   for(int i = 1;i < 6;i++){ 
       cout << vp[i].first << " " << vp[i].second << endl;
   } 
   sort(vp.begin(),vp.end());
   cout << "pore" << endl;
   for(int i = 1;i < 6;i++){ 
       cout << vp[i].first << " " << vp[i].second << endl;
   } 
   
   for(int i = 1;i < 6;i++){
   	sum += vp[i].first;
   	sumA[i] = sum;
   }
   cout << endl << endl;
   for(int i = 1;i <= 5;i++){
           sum += bT[i];
           sumA[i] = sum;
           turnA[i] = vp[i].first + turnA[i - 1];
           waitT[i] = turnA[i] - vp[i].first;
           avgW += waitT[i];
           avgT += turnA[i];        
   }
   cout << "gantt chart:" << endl;
   cout << "|";
   for(int i = 0;i<5;i++){
         cout << "--P" << (vp[i+1].second) << "--|";
   }
   
   cout<< endl;
   cout << sumA[0];
   for(int i = 1;i < 6;i++){
   	printf("%7d",sumA[i]);
   }
   cout << endl;
   printf("pid   waiting time   turnAround\n");
   for(int i = 1;i <= 5;i++){
       printf("P%d   %6d   %8d\n",i,waitT[i],turnA[i]);    
   }
   
   cout << "avg waiting time : " << avgW/5 << endl;
   cout << "avg turnaround time : " << avgT/5 << endl;
    



return 0;
}
