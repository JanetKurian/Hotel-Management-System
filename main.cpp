#include <iostream>
using namespace std;
int main()
{
	//std::cout<<"Hello World";
	int quant;
	int choice;
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;/// quant available
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;/// quant sold
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;/// total price of each item
	// list-> for the user
	// first input the values
	cout<<"\n\t Quantity of items we have ";
	cout<<"\n Rooms available";
	cin>>Qrooms;
	cout<<"\n Qty pasta ";
	cin>>Qpasta;
	cout<<"\n Qty burger ";
	cin>>Qburger;
	cout<<"\n Qty noodles ";
	cin>>Qnoodles;
	cout<<"\n Qty shake ";
	cin>>Qshake;
	cout<<"\n Qty chicken-roll ";
	cin>>Qchicken;

	m:
	cout<<"\n\t\t\t Please select from the menu";
	cout<<"\n\n1) Rooms";
	cout<<"\n\n2) Pasta";
	cout<<"\n\n3) burger";
	cout<<"\n\n4) noodles";
	cout<<"\n\n5) shake";
	cout<<"\n\n6) chicken-roll";
	cout<<"\n\n7) Information regarding sales and collection";
	cout<<"\n\n8) Exit";

	cout<<"Please enter your choice";
	cin>>choice;
	switch(choice) {
	case 1:
		cout<<"\n\n Enter number of rooms you want";
		cin>>quant;
		if(Qrooms-Srooms>=quant) {
			Srooms=Srooms+quant;
			Total_rooms=Total_rooms+(quant*1200);
			cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
		} else
			cout<<"\n\tOnly"<<Qrooms-Srooms<<"rooms remaining in hotel";
		break;
	case 2:
		cout<<"\n\n Enter Pasta Qty";
		cin>>quant;
		if(Qpasta-Spasta>=quant) {
			Spasta=Spasta+quant;
			Total_pasta=Total_pasta+(quant*250);
			cout<<"\n\n\t\t"<<quant<<" pasta is the order";
		} else
			cout<<"\n\tOnly"<<Qpasta-Spasta<<" pasta remaining";
		break;
	case 3:
		cout<<"\n\n Enter burger Qty";
		cin>>quant;
		if(Qburger-Sburger>=quant) {
			Sburger=Sburger+quant;
			Total_burger=Total_burger+(quant*120);
			cout<<"\n\n\t\t"<<quant<<" burger is the order";
		} else
			cout<<"\n\tOnly"<<Qburger-Sburger<<" burger remaining";
		break;
	case 4:
		cout<<"\n\n Enter noodles Qty";
		cin>>quant;
		if(Qnoodles-Snoodles>=quant) {
			Snoodles=Snoodles+quant;
			Total_noodles=Total_noodles+(quant*250);
			cout<<"\n\n\t\t"<<quant<<" noodles is the order";
		} else
			cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" noodles remaining";
		break;

	case 5:
		cout<<"\n\n Enter shake Qty";
		cin>>quant;
		if(Qshake-Sshake>=quant) {
			Sshake=Sshake+quant;
			Total_shake=Total_shake+(quant*250);
			cout<<"\n\n\t\t"<<quant<<" shake is the order";
		} else
			cout<<"\n\tOnly"<<Qshake-Sshake<<" shake remaining";
		break;

	case 6:
		cout<<"\n\n Enter chicken-roll Qty";
		cin>>quant;
		if(Qchicken-Schicken>=quant) {
			Schicken=Schicken+quant;
			Total_chicken=Total_chicken+(quant*150);
			cout<<"\n\n\t\t"<<quant<<" chicken-roll is the order";
		} else
			cout<<"\n\tOnly"<<Qchicken-Schicken<<" chicken-roll remaining";
		break;

	case 7:
		cout<<"\n\t\tDetails of sales and collection";
		cout<<"\n\n Number of rooms we had:"<<Qrooms;
		cout<<"\n\n Rooms gave for rent"<<Srooms;
		cout<<"\n\n Remaining rooms"<<Qrooms-Srooms;
		cout<<"\n\n Total rooms collection"<<Total_rooms;

		cout<<"\n\n Number of pasta we had:"<<Qpasta;
		cout<<"\n\n pasta sold"<<Spasta;
		cout<<"\n\n Remaining pasta"<<Qpasta-Spasta;
		cout<<"\n\n Total pasta collection"<<Total_pasta;

		cout<<"\n\n Number of burger we had:"<<Qburger;
		cout<<"\n\n pasta sold"<<Sburger;
		cout<<"\n\n Remaining burger"<<Qburger-Sburger;
		cout<<"\n\n Total burger collection"<<Total_burger;

		cout<<"\n\n Number of noodles we had:"<<Qnoodles;
		cout<<"\n\n noodles sold"<<Snoodles;
		cout<<"\n\n Remaining noodles"<<Qnoodles-Snoodles;
		cout<<"\n\n Total noodles collection"<<Total_noodles;

		cout<<"\n\n Number of shake we had:"<<Qshake;
		cout<<"\n\n shake sold"<<Sshake;
		cout<<"\n\n Remaining shake"<<Qshake-Sshake;
		cout<<"\n\n Total shake collection"<<Total_shake;

		cout<<"\n\n Number of chicken-roll we had:"<<Qchicken;
		cout<<"\n\n chicken-roll sold"<<Schicken;
		cout<<"\n\n Remaining chicken-roll"<<Qchicken-Schicken;
		cout<<"\n\n Total chicken-roll collection"<<Total_chicken;
		break;
		case 8: 
		    exit(0);
		default:
		    cout<<"\n Please select number mentioned above";

	}
	goto m;/// jump to tmnu after choice done

	return 0;
}
