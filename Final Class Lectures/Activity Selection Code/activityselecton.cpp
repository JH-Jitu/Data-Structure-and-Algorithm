#include<iostream>
using namespace std;

class activity{
public:
    int id;
    int start_time;
    int finish_time;

};
int main(){

    activity a[100];
    int n, i;
    cout << "Enter the number of activities" << endl;
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "activity " << i << ": " ;
        int id, s_time, f_time;
        cin >> id;
        a[i].id= id;
        cin >> s_time;
        a[i].start_time = s_time;
        cin >> f_time;
        a[i].finish_time = f_time;
    }

    activity key;

    for(int j=1;j<n;j++){
        key=a[j];
        i=j-1;
        while(i>=0 && a[i].finish_time > key.finish_time){
            a[i+1] = a[i];
            i--;
        }
        a[i+1]=key;
    }

    cout<<"Sorted tasks" << endl;
    for(i = 0 ; i < n; i++) {
        cout << a[i].id << ' ' << a[i].start_time << ' ' << a[i].finish_time << endl;
    }

    int activity_id[100];
    activity_id[0]= a[0].id;
    int track=0;
    int current=0;
    bool flag=true;
    int p;

    while(flag){

        flag=false;
        p=current;
        for(int i=p;i<n;i++){
           if(a[current].finish_time < a[i+1].start_time && i+1<n){
            track ++ ;
            activity_id[track]= a[i+1].id;
            current= i+1;
            flag=true;
            break;
           }
        }

    }

    cout<< "track = " << track << " and current = " << current << '\n';


    cout << "The list of activity id is: " ;
    for(int i=0;i<=track ; i++){
        cout << activity_id[i]<<' ';
    }


}
