#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int randomNumberGenerater(int start, int end){

    srand(time(0));
    int randValue = (rand() % end) + 1;

    if(start <= randValue && end >= randValue) {
        return randValue;
    } else{
        randValue *= start;
        return (randValue % end);
     }
}

void numberGussingGame() {

    int attps = 5;
    int start = 1;
    int end = 100;
    int target;
    int randomNumber =  randomNumberGenerater(start, end);
    cout<<"----------------------------------"<<endl;
cout<<"Welcome to number Gassing Game"<<endl;
cout<<"you have "<<attps<<endl;
cout<<"Rang is"<<start<<"to"<<end<<endl;
 cout<<"----------------------------------"<<endl;
while (attps)
{
    cout<<"enter guess number";
    cin>>target;
    if (target == randomNumber)
    {
        cout<<"---------------"<<endl;
        cout<<"corrent"<<endl;
        break;
    }else if(target > randomNumber && attps > 1 ){
        cout<<"too high, !try lower"<<endl;
    } else if(target < randomNumber &&attps > 1){
        cout<<"too low, !try highly"<<endl;
    }
    attps--;
    
}
if(attps){
    cout<<"you win he game"<<endl;
    cout<<"---------------"<<endl;
}else{
     cout<<"---------------"<<endl;
    cout<<"Oops,loss the game"<<endl;
     cout<<"---------------"<<endl;
}

}


int main(int argc, char const *argv[])
{
    numberGussingGame();
    cout<<endl;
    return 0;
}

