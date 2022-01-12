//  TowerHanoiRecursive

// Includes and using namespace..
#include <iostream>
using namespace std;

// Prototype for Recursive Tower of Hanoi.
void towerHanoiRecursive(int DN, char from, char to, char null);

// Main function getting Disk # from user, then calls Tower of Hanoi function.
int main()
{
    int DNum;
    cout<<"Hello, welcome to Tower of Hanoi"<<endl;
    cout<<"Please enter how many disks to play with"<<endl;
    cout<<"Disk #: ";
    cin>>DNum;
    cout<<endl;
    cout<<"You entered: "<<DNum<<" Disks.."<<endl<<endl;
    
    towerHanoiRecursive(DNum,'A', 'B', 'C');
    
    return 0;
}


void towerHanoiRecursive(int DN, char A, char B, char C)
{
    if(DN==1)
    {
        cout<<"Move Disk 1 from Rod "<<A<<" to Rod "<<B<<endl;
        return;
    }
    towerHanoiRecursive(DN-1, A, C, B);
    cout<<"Move Disk "<<DN<<" from Rod "<<A<<" to Rod "<<C<<endl;
    towerHanoiRecursive(DN-1, C, B, A);
}
