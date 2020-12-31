#include<iostream>
using namespace std;

int main()
{
	int arr[1000],size,i,top=-1,choice,element,key,max,min;
	cout<<"enter size of stack\n";
	cin>>size;
	while(1)
	{
		cout<<"\nSTACK MENU\n";
		cout<<" 1.push \n 2.pop\n 3.display\n 4.exit\n 5.Maximal element\n 6.Minimal element\n";
	    cin>>choice;
		switch(choice)
		{
			case 1: cout<<"enter an element to push\n";
			        cin>>element;
			        if(size-1==top)
					{
						cout<<"STACK IS FULL\n";
						break;
					}
					else
					{
						top=top+1;
						arr[top]=element;
						cout<<"\n element is inserted :"<<element<<endl;
					}
			        break;
			case 2:		
					if(top==-1)
					{
						cout<<"stack is empty\n";
						break;
					}
					else
					{
						top=top-1;
						cout<<"element is popped out\n";
					}
	
			      break;
			case 3: 
			     if(top==-1)
			     {
			     	cout<<"stack is empty\n";
			     	break;
				 }
					cout<<"\nstack elements are:";
					for(i=top;i>=0;i--)
					cout<<"\t"<<arr[i];
			       break;
			case 4: exit (0);
			case 5: key=top;
					max=arr[top];
					while(key>=0)
					{
						max=max<arr[key] ? arr[key]:max;
						key--;
					}
					cout<<"maximum is:"<<max;
					break;
			case 6: key=top;
					min=arr[top];
					while(key>=0)
					{
						min=min>arr[key] ? arr[key]:min;
						key--;
					}
					cout<<"minimum is:"<<min;
			default:"\nmatch not found\n";
		 } 
	}	
	return 0;
}
