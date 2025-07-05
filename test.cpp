#include<iostream>
using namespace std;
int Velocity(int a[] ,int n){
    int sum =0;
    for(int i=0; i<n;i++) sum +=a[i];
    return sum;
}
double Avgvelocity(int a[],int n){
  double sum2 =0;
  for(int i=0;i<n;i++) sum2 += a[i];
  return sum2/n;
}
int Burndown(int total , int completed){
    return total - completed;
}
int CycleTime(int end , int start){
    return end - start;
}
double AvgCycleTime(int a[] , int n){
    int sum3 =0;
    for(int i=0;i<n;i++) sum3 += a[i];
    return sum3/n;
}
double Throughput(int done , int time ){
    return done /time ;
}
double defects (int defects , int size){
    return defects/size;
}
double GoalSuccess(int achieve , int total){
    return achieve/total*100; 
}
double CSAT(int happy, int total){
    return happy/total*100;
}
double Satisfaction(int a[], int n){
    int sum4 = 0;
    for(int i=0;i<n;i++) sum4 += a[i];
    return sum4/n;
}
int main(){
    cout << " Scrum Metrics"<<endl;
   
    int n1,storypoints[100];
    cout<<"Enter No of Sprints"<<endl;
    cin>>n1;
    cout<<"enter Story Points for each"<<endl;
    for(int i=0;i<n1;i++) cin>>storypoints[i];

    cout<<"Velocity"<<Velocity(storypoints,n1);
    cout<<"Average Velocity"<<Avgvelocity(storypoints,n1);
     
    int a1,a2,a3,a4;
    cout << "Enter the Total and The Completed Sprints"<<endl;
    cin>>a1>>a2;
    cout<<"Sprint Burndown"<<Burndown(a1,a2);
    cout << "Enter the Total and The Completed Sprints"<<endl;
    cin>>a3>>a4;
    cout<<"Release Burndown"<<Burndown(a3,a4);
 
    int a5,a6;
    cout << "Enter Start and end times for Velocity"<<endl;
    cin>>a5>>a6;
    cout<<"Cycle Time"<<CycleTime(a5,a6);

    int n2,cycles[100];
    cout <<"Enter No of Completed tasks"<<endl;
    cin>>n2;
    cout<<"Enter the cycle times for each"<<endl;
    for(int i=0;i<n2;i++) cin>>cycles[i];

    cout<<"Average Cycle time"<<AvgCycleTime(cycles,n2);
    
    int a7,a8,a9,a10;
    cout<<"Enter for Throughputs"<<endl;
    cin>>a7>>a8;
    cout<<"Throughput"<<Throughput(a7,a8);
    cout<<"Enter for Defects"<<endl;
    cin>>a9,a10;
    cout<<"Defects"<<defects(a9,a10);
    int b1,b2,b3,b4;
    cout <<"enter for Customer Satisifaction"<<endl;
    cin>>b1>>b2;
    cout<<"CSAT"<<CSAT(b1,b2)<<"%"<<endl;
    cout<<"Enter for Sprint Success Goal"<<endl;
    cin>>b3>>b4;
    cout<<"SprintSuccessGoal"<<GoalSuccess(b3,b4)<<"%"<<endl;

    int n3,ratings[100];
    cout<<"Enter No of Employees"<<endl;
    cin>>n3;
    cout<<"Enter Ratings of each Employee"<<endl;
    for(int i=0;i<n3;i++) cin>>ratings[i];

    cout<<"Team Satisifaction"<<Satisfaction(ratings,n3);
}