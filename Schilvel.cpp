//Slave Lassock Schilvel, alpha version 1.0.0

//  *This game was created by DebrisKaiser(Reinhardt)
//  Sense comes from Bilibili Laojiu;
//  <Teaching Feeling>£»
//  <the Nein diary of sexual training>
//  This work is so simple and crude
//  I'd glad to respond if you guys have any question.
//  If you need more Galgame like this, please get in touch with me as free (my Github and Wechat is DebrisKaiser).
//  At last, I will be totally thankful that you guys can play my game, Your support is my greatest motivation!


#include<iostream> 
#include<iomanip>
#include<ctime>
#include<vector>
#include<array>
#include<string>
#include<cstdlib>
#include <fstream>
using namespace std;

void begining(){int enter;
	cout<<"When I realize the daybreak has come..."<<endl;
	system("pause");
	cout<<"I heard a heavy knocked..." <<endl;
	system("pause");
	cout<<"I think there's no appointment today"<<endl;
	system("pause");
	cout<<"And also have no acquaintances who can come to visit without saying hello.."<<endl;
	system("pause");
	cout<<"(who will be there?)"<<endl;
	system("pause"); 
	cout<<"Suspicious man:Guten Tag(in German it means 'hello')"<<endl; 
    system("pause"); 
    cout<<"When I opened the door, I met this man who appeared in front of me."<<endl;
    system("pause"); 
    cout<<"Suspicious man:You still remenber me?"<<endl;
	system("pause"); 
	cout<<"Suspicious man:You just saved my life in the past."<<endl;
	system("pause"); 
	cout<<"I have compare the man with memorize in my mind.."<<endl;
	system("pause");
	cout<<"I really feel a little familiar to hear him say that."<<endl;
	system("pause");
	cout<<"Suspicious man:That's right,the man who help me when I be injured in the valley is just you, my mister."<<endl;
	system("pause");
	cout<<"Suspicious man:the reason...yeah, is some bad clash"<<endl;
	system("pause");
	cout<<"Suspicious man:I don't know whether it is because the'justice'in your mind."<<endl;
	system("pause");
	cout<<"Suspicious man:Ehh..just stop it,I haven't to appreciate you in that time, so I felt so guilty.." <<endl;
	system("pause");
	cout<<"Suspicious man:I come to thank you today because I pass by the nearby city occasionally."<<endl;
	system("pause");
	cout<<"(This man was a little suspicious but it seems that he Specially come to thank.just make a tea first...)"<<endl;
	system("pause");
	cout<<"Suspicious man:(Hurriedly waved his hand)Nein Danke.(in German it means 'no need')I'm not going to stay here for a long time, so don't be so polite.Please accept this first.."<<endl;
	system("pause");
	cout<<"Suspicious man: I couldn't pay for medical expenses in that time because I didn't bring money at that time..."<<endl;
	system("pause");
	cout<<"(The man took out an envelope from his arms and handed it over here)"<<endl;
	system("pause");
	cout<<"(After inspection, it was found that it contained a little more money than the medical expenses)"<<endl;
	cout<<"*2000 Gold get."<<endl; 
	system("pause");
	cout<<"Suspicious man:This is an apology for taking so long to pay the fee,please take it by no guilty."<<endl;
	system("pause");
	cout<<"Suspicious man:And I had something out of it,could you keep the conversation confidential after that?"<<endl;
	system("pause");
	cout<<"Suspicious man:...you are kind as usual, It's really understanding."<<endl;
	system("pause");
	cout<<"(The figure of a young girl appeared behind the man)"<<endl;
	system("pause"); 
	cout<<"Suspicious man:There's a capitalist die by accident in the last few days."<<endl;
	system("pause"); 
	cout<<"Suspicious man:Because he has no close relatives, some people who claim to be relatives and friends of the government divide up his property."<<endl;
	system("pause");
	cout<<"Suspicious man:And I also get some thing else after their picked up"<<endl;
	system("pause");
	cout<<"Suspicious man:Ehh..This girl is also one of them"<<endl;
	system("pause");
	cout<<"Suspicious man:Beacuse I'a poor businessman.."<<endl;
	system("pause");
	cout<<"Suspicious man:I sell everything I used,So my business has been going well."<<endl;
	system("pause");
	cout<<"Suspicious man:Like Personal business or something,it will be fine if their are the youth. But maybe I couldn't found the buyer who could believed if there's a littel just like today.."<<endl;
	cout<<"Suspicious man:Get rid of it or throw it away will be also impossible."<<endl;
	system("pause");
	cout<<"Suspicious man:I also have conscience and compassion, although I was a businessman.."<<endl;
	system("pause");
	cout<<"Suspicious man:When I passed through this city, I just remembered you who helped me at the beginning."<<endl;
	system("pause");
	cout<<"Suspicious man:Because it seems that you are living alone, my doctor."<<endl;
	system("pause");
	cout<<"Suspicious man:Maybe I'm meddling, but you will still be lonely right?"<<endl;
	cout<<"Suspicious man:keep this little girl or not?"<<endl;
	system("pause");
	cout<<"(What would you do?)"<<endl;
	cout<<"Please enter£º1.Accept      2.Refuse"<<endl;
	cin>>enter;
	if(enter==2) {
		cout<<"Oh, yeah...There is no way to do such a sudden thing..."<<endl;
		system("pause");
		cout<<"Thank you for your time."<<endl;
		exit (0);
	}
	}

int main()
{
	cout<<"**************************************************"<<endl; 
	cout<<"*               -Teaching Feeling-               *"<<endl;           
	cout<<"*                                                *"<<endl;
	cout<<"*             slave lassock Schilvel             *"<<endl;
	cout<<"*                                                *"<<endl;
	cout<<"*                  Tap to start                  *"<<endl;
	cout<<"*                                                *"<<endl;
    cout<<"**************************************************"<<endl;
	
	//1.set your name
	string player_name;
	//2.set Schilvel's name
	string Schilvel_name;
	//set the initial information
	int birth_month;
	int birth_date;
	int choice,temp1,temp2,temp3;
	int gold=2000;
	int day_count=1;                        //initialized the variable. 
	
	
	string basic_info[5]={"Intimacy          "," wisdom          "," attractiveness  "," morality        ","Degree of goodwill"}; 
	int basic_infos[5]={0,10,0,0,0};
	//5 basic info: Intimacy, wisdom, attractiveness, morality, Degree of goodwill.
	string constell_names[12][2]={
	    {"Capricorn","Aquarius"},
		{"Aquarius","Pisces"},
		{"Pisces","Aries"},
		{"Aries","Taurus"},
		{"Taurus","Gemini"}, 
		{"Gemini","Cancer"}, 
		{"Cancer","Leo"}, 
		{"Leo","Virgo"}, 
		{"Virgo"," Libra"}, 
		{" Libra","Scorpio"},
		{"Scorpio","Sagittarius"},
		{"Sagittarius","Capricorn"} 
	};
	//constell list
	begining();
	cout<<"Please tell me your name £º";
	cin>> player_name;
	cout<<"enter the birthday of Schilvel:"<<endl;
	cout<<"month: ";
	cin>>birth_month;
	cout<<"date: ";
	cin>>birth_date; 
	
	int constell_dates[]={20,19,21,20,21,22,23,23,23,24,23,22};
	
	cout<<"Schilvel's constell is:";
	cout<<constell_names[birth_month-1][birth_date/constell_dates[birth_month-1]]<<endl<<endl;//cout constell
	
	
	while(1){                                  //The main loop of game.
		cout<<"\n1: The condition of Schilvel\n2: Action\n3: Touch head slightly\n4: Talk with Schilvel\n5: Load\n6: Read the file\n7: Exit"<<endl; 
		cin>>choice;
		switch(choice){
			case 1:{
			cout<<"basic info:"<<endl;
	        for(int i=0;i<5;i++){
		    cout<<basic_info[i]<<":"<<basic_infos[i];
	            for(int j=0;j<20;j++)
	                if(j<(basic_infos[i]/10))
		        cout<<"¡ö";
	                else
	                cout<<"¡õ";
	                cout<<endl;
		    }
			    cout<<"Golds: " <<gold<<"¡£"<<endl;
				cout<<"It is the"<<day_count<<"day with Schilvel together"<<endl; 
	        if(basic_infos[4]<=40){
	        	cout<<"Schilvel still regard you as a stranger."<<endl; 
			}
			if(basic_infos[4]>40&&basic_infos[4]<=100){
				cout<<"Schilvel regards you as a cohabiting person and trusts you"<<endl; 
			}
			if(basic_infos[4]>100&&basic_infos[4]<=300){
				cout<<"Schilvel trusts you very much and treats you as family"<<endl; 
			}
			if(basic_infos[4]>300){
				cout<<"Schilvel totally fall in love with you."<<endl; 
			}
			
			break;
			} 
			case 2:{
				cout<<"Choose to action:"<<endl;
				for(int i=0;i<3;i++){
				cout<<"1.Attending private school 2.Learn etiquette  3.Buy clothes for Schilvel 4.Earn money by working";
				cout<<"  :";
				srand(time(NULL));
				cin>>choice;
				if(choice==1){
					if(gold<150) {
							cout<<"insufficient funds!Please earn money first." <<endl;
					    	break;
						}
					basic_infos[1]+=temp1=rand()%11;
					basic_infos[3]+=temp2=rand()%11;
					gold-=temp3=rand()%150;
					cout<<"Knowledge is the most important thing,don't be foolish like Scrooge!"<<endl;
					cout<<"wisdom+"<<temp1<<",morality+"<<temp2<<",cost "<< temp3<<endl;
				    }
				if(choice==2) {
					if(gold<150) {
							cout<<"insufficient funds!Please earn money first." <<endl;
					    	break;
						}
				    basic_infos[2]+=temp1=rand()%11;
					basic_infos[3]+=temp2=rand()%11;
					gold-=temp3=rand()%150;
					cout<<"There're so many perfect thing for you, but if you don't learn it, you will pick up nothing."<<endl;
					cout<<"attractiveness+"<<temp1<<",morality+"<<temp2<<",cost "<< temp3<<endl;	
				}
				if(choice==3){
				    cout<<"Yaley yaley,The customer is god.Come in plz plz..." <<endl;
				    system("pause");
				    cout<<"What do you need, my young mister?" <<endl;
					cout<<"1.elegant full dress$200  2.one-piece dress$150  3.kimono$160"<<endl;
					cin>>temp1;
					if(temp1==1){
					    if(gold<200) {
					    	cout<<"insufficient funds!Please earn money first." <<endl;
					    	break;
						}
						gold-=200;
						basic_infos[4]+=temp1=10;
						basic_infos[0]+=temp2=5; 
						cout<<"('elegant full dress'had bought)"<<endl;
						system("pause");
						cout<<"Schilvel: Is this ... a dress for me? Master, that's very kind of you. Thank you master!"<<endl;
						system("pause");
						cout<<"Degree of goodwill increased" <<temp1<<"¡£"<<endl;
						cout<<"Intimacy increased" <<temp2<<"¡£"<<endl;
						
					}
					if(temp1==2){
						if(gold<150) {
							cout<<"insufficient funds!Please earn money first." <<endl;
					    	break;
						}
						gold-=150;
						basic_infos[4]+=temp1=8;
						basic_infos[0]+=temp2=4; 
						cout<<"('one-piece dress'had bought.)"<<endl;
						system("pause");
						cout<<"Schilvel: Is this ... a dress for me? Master, that's very kind of you. Thank you master!"<<endl;
						system("pause");
						cout<<"Degree of goodwill increased" <<temp1<<"¡£"<<endl;
						cout<<"Intimacy increased" <<temp2<<"¡£"<<endl;
					}	
					if(temp1==3){
						if(gold<160) {
							cout<<"insufficient funds!Please earn money first." <<endl;
					    	break;
						}
						gold-=160;
						basic_infos[4]+=temp1=8;
						basic_infos[0]+=temp2=4;
						cout<<"('kimono'had bought.)"<<endl;
						system("pause");
						cout<<"Schilvel: Is this ... a dress for me? Master, that's very kind of you. Thank you master!"<<endl;
						system("pause");
						cout<<"Degree of goodwill increased" <<temp1<<"¡£"<<endl;
						cout<<"Intimacy increased" <<temp2<<"¡£"<<endl;
						
					}	 
				}
				if(choice==4) {
					gold+=temp1=rand()%200;
					cout<<"No working,no money."<<endl;
					cout<<"daily wage get:" <<temp1<<endl; 
				} 
				
			}
			day_count++;
		    break;
	
        }
        case 3:{ 
        	if(basic_infos[4]<=40){
        		cout<<"Schilvel: ..."<<endl;
        		system("pause");
        		cout<<"Schilvel:(confused)...Does this have any special meaning?"<<endl;
        		system("pause");
        		cout<<"Schilvel:(confused)...Does this make you happy?"<<endl;
        		system("pause");
        		cout<<"Schilvel:Hmm.."<<endl;
        		system("pause");
        		cout<<"Schilvel:I ... don't quite understand it..."<<endl;
        		system("pause");
        		cout<<"Schilvel:As your wish."<<endl;
				basic_infos[4]+=temp1=rand()%3;
				cout<<"Degree of goodwill increased "<<temp1<<"¡£" <<endl;
				
				} 
        	if(basic_infos[4]>40&&basic_infos[4]<=100){
        		cout<<"Schilvel:In this case, does it make you happy?"<<endl;
        		system("pause");
        		cout<<"Schilvel:I...I'm getting used to it."<<endl;
        		system("pause");
        		cout<<"Schilvel:Make yourself at home."<<endl;
        		system("pause");
        		cout<<"Schilvel:Hoo.."<<endl;
        		system("pause");
        		cout<<"Schilvel:I felt less afraid by master's touch ."<<endl;
        		basic_infos[4]+=temp2=2;
        		basic_infos[0]+=temp3=rand()%5;
        		cout<<"Degree of goodwill increased "<<temp2<<"¡£" <<endl;
        		cout<<"Intimacy increased"<<temp3<<"¡£" <<endl;
        		
        		} 
        		
			if(basic_infos[4]>100){
        		cout<<"Schilvel:Master's hand, so warm..."<<endl;
        		system("pause");
        		cout<<"Schilvel:Can you keep touching me?"<<endl;
        		system("pause");
        		cout<<"Schilvel:the hand that brings me happiness is master's hand."<<endl;
        		system("pause");
        		cout<<"Schilvel:Humm.."<<endl;
        		system("pause");
        		cout<<"Schilvel:Can you touch it all the time?"<<endl;
				basic_infos[4]+=temp3=4;
				basic_infos[0]+=temp2=4;
				cout<<"Degree of goodwill increased "<<temp3<<"¡£" <<endl;
				cout<<"Intimacy increased"<<temp2<<"¡£" <<endl;	
			}
			break;
		}
		case 4:{
			if(basic_infos[4]<=40){
				cout<<"Schilvel:..."<<endl;
				system("pause");
				cout<<"(She seems to have been silent all the time ...)"<<endl;
				system("pause");
				cout<<"Schilvel:...eh?"<<endl;
				system("pause");
				cout<<"Schilvel: You mean this scar? This was whipped by the former owner for pleasure..."<<endl;
				system("pause");
				cout<<"Schilvel: I hope you master... will show mercy. .."<<endl;
				system("pause");
				cout<<"(The girl seems to show a sad expression)"<<endl;
				system("pause");
				basic_infos[4]+=temp1=1;
				cout<<"Degree of goodwill increased "<<temp1<<"¡£" <<endl;
			}
			if(basic_infos[4]>40&&basic_infos[4]<=100){
				cout<<"Schilvel£º..."<<endl;
				system("pause");
				cout<<"(Schilvel looks at you with a smile)"<<endl;
				system("pause");
				cout<<"Schilvel£º...emm£¿"<<endl;
				system("pause");
				cout<<"Schilvel£ºmy master can provide me with warm food and bed, so great."<<endl;
				system("pause");
				cout<<"Schilvel£ºMaster, are you a doctor?"<<endl;
				system("pause");
				cout<<"(The girl seems to show a sad expression)"<<endl;
				system("pause");
				cout<<"Schilvel£ºBut it doesn't seem to be able to restore my scars. ..."<<endl;
				system("pause");
				cout<<"Schilvel£ºHowever, Schilvel will still help with master!"<<endl;
				system("pause");
				basic_infos[4]+=temp2=2;
				basic_infos[0]+=temp3=2;
				cout<<"Degree of goodwill increased "<<temp2<<"¡£" <<endl;
				cout<<"Intimacy increased"<<temp3<<"¡£" <<endl;
			}
			if(basic_infos[4]>100){
				cout<<"Schilvel£º..."<<endl;
				system("pause");
				cout<<"Does the master want to talk to me? Schilvel would love to!"<<endl;
				system("pause");
				cout<<"Schilvel£º...emm?"<<endl;
				system("pause");
				cout<<"Schilvel£ºMaster's work, Schilvel seems to be able to help"<<endl;
				system("pause");
				cout<<"Schilvel£ºMaster's hand, so warm ..."<<endl;
				system("pause");
				cout<<"(The girl showed a bright smile)"<<endl;
				system("pause");
				cout<<"Schilvel£ºIt's so happy to meet my master."<<endl;
				system("pause");
				cout<<"Schilvel£ºI wish it would continue like this ..."<<endl; 
				system("pause");
				basic_infos[4]+=temp2=3;
				basic_infos[0]+=temp3=3;
				cout<<"Degree of goodwill increased "<<temp2<<"¡£" <<endl;
				cout<<"Intimacy increased"<<temp3<<"¡£" <<endl;
			}
			break;
		}
		case 5:{
			cout<<"Loading, please wait..."<<endl;
			system("pause");
			ofstream out("data_load.txt");//read the main 
        for(int i=0;i<5;i++){
	 
	 	out<<basic_infos[i]<<" ";		
	}
	    out<<gold<<" ";
	    out<<day_count;
	    cout<<"Loading successed!"<<endl;
			break;
		} 
		case 6:{
			cout<<"Reading the file, please wait..."<<endl;
			system("pause");
            ifstream in("data_load.txt");//read the main 
        for(int i=0;i<5;i++){
	 
	 	in>>basic_infos[i];
			
	}
	    in>>gold;
	    in>>day_count;
	        cout<<"Reading file successed!"<<endl;
			break;
		}
		case 7:{
            cout<<"Exit successed."<<endl; 
			return 0;
		}
		
    }
        
	
}
return 0;
}
