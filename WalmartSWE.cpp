#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{

//VECTOR DECLARATIONS
vector <int> A;
vector <int> B;
vector <int> C;
vector <int> D;
vector <int> E;
vector <int> F;
vector <int> G;
vector <int> H;
vector <int> I;
vector <int> J;

//PUSH BACK VALUES FOR SEATS IN VECTORS
int i;
for(i=0; i<20; i++)
{
    A.push_back(i+1);
    B.push_back(i+1);
    C.push_back(i+1);
    D.push_back(i+1);
    E.push_back(i+1);
    F.push_back(i+1);
    G.push_back(i+1);
    H.push_back(i+1);
    I.push_back(i+1);
    J.push_back(i+1);
}

//FILE DECLARATIONS
string filename;
string exportfile;
ifstream input;
ofstream output;

// USER INPUT AND FILE I/O
cout << "Enter file name:" << endl;
cin >> filename;
input.open(filename);
output.open("WalmartOutput.csv");
string res;
int people;
string ticket;
int seatnum;

//ITERATOR INITIALIZATIONS
vector <int>::iterator it, it2;
it=A.begin();
it2=A.end();

vector <int>::iterator it3, it4;
it3=B.begin();
it4=B.end();

vector<int>::iterator it5, it6;
it5=C.begin();
it6=C.end();

vector <int>::iterator it7, it8;
it7=D.begin();
it8=D.end();

vector<int>::iterator it9, it10;
it9=E.begin();
it10=E.end();

vector<int>::iterator it11, it12;
it11=F.begin();
it12=F.end();

vector<int>::iterator it13, it14;
it13=G.begin();
it14=G.end();

vector<int>::iterator it15, it16;
it15=H.begin();
it16=H.end();

vector<int>::iterator it17, it18;
it17=I.begin();
it18=I.end();

vector<int>::iterator it19, it20;
it19=J.begin();
it20=J.end();

//THE MEAT AND POTATOES
if(input.is_open())
{

    while(!input.eof())
    {
    input >> res;
    input >> people;
    if(people>0)
    {
        // ROW A
        if(!A.empty() && A.size()>people)
        {
            output << res << " ";
            //ASSIGNING SEATS
            for(int i=0; i<A.size(); i++)
            {
                if(i<people)
                {
                seatnum=A.at(i);
                string seat=to_string(seatnum);
                ticket="A";
                output << ticket+seat << " ";
                }

                
            }
            //REMOVING PURCHASED SEATS
                int size=A.size()-(people+3);
                for(int j=0; j<size; j++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it2--;
                }
                A.erase(it, it2);
                it2=A.end();
                output << endl;
        }
        //ROW B
        else if(!B.empty() && B.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<B.size(); k++)
            {
                if(k<people)
                {
                seatnum=B.at(k);
                string seat=to_string(seatnum);
                ticket="B";
                output << ticket+seat << " ";
                }

                
            }
            //REMOVING PURCHASED SEATS
                int size1=B.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it4--;
                }
                B.erase(it3, it4);
                it4=B.end();
                output << endl;
        }
         else if(!C.empty() && C.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<C.size(); k++)
            {
                if(k<people)
                {
                seatnum=C.at(k);
                string seat=to_string(seatnum);
                ticket="C";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=C.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it6--;
                }
                C.erase(it5, it6);
                it6=C.end();
                output << endl;
        }
        //ROW D
        else if(!D.empty() && D.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<D.size(); k++)
            {
                if(k<people)
                {
                seatnum=D.at(k);
                string seat=to_string(seatnum);
                ticket="D";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=D.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it8--;
                }
                D.erase(it7, it8);
                it8=D.end();
                output << endl;
        }

        //ROW E
        else if(!E.empty() && E.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<E.size(); k++)
            {
                if(k<people)
                {
                seatnum=E.at(k);
                string seat=to_string(seatnum);
                ticket="E";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=E.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it10--;
                }
                E.erase(it9, it10);
                it10=E.end();
                output << endl;
        }

        //ROW F
        else if(!F.empty() && F.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<F.size(); k++)
            {
                if(k<people)
                {
                seatnum=F.at(k);
                string seat=to_string(seatnum);
                ticket="F";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=F.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it12--;
                }
                F.erase(it11, it12);
                it12=F.end();
                output << endl;
        }

        //ROW G
        else if(!G.empty() && G.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<G.size(); k++)
            {
                if(k<people)
                {
                seatnum=G.at(k);
                string seat=to_string(seatnum);
                ticket="G";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=G.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it14--;
                }
                G.erase(it13, it14);
                it14=G.end();
                output << endl;
        }

        //ROW H
        else if(!H.empty() && H.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<H.size(); k++)
            {
                if(k<people)
                {
                seatnum=H.at(k);
                string seat=to_string(seatnum);
                ticket="H";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=H.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it16--;
                }
                H.erase(it15, it16);
                it16=H.end();
                output << endl;
        }

        //ROW I
        else if(!I.empty() && I.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<I.size(); k++)
            {
                if(k<people)
                {
                seatnum=I.at(k);
                string seat=to_string(seatnum);
                ticket="I";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=I.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it18--;
                }
                I.erase(it17, it18);
                it18=I.end();
                output << endl;
        }

        //ROW J
        else if(!J.empty() && J.size()>people)
         {
            output << res << " ";
            //ASSIGNING SEATS
            for(int k=0; k<J.size(); k++)
            {
                if(k<people)
                {
                seatnum=J.at(k);
                string seat=to_string(seatnum);
                ticket="J";
                output << ticket+seat << " ";
                }

                
            }
                //REMOVING PURCHASED SEATS
                int size1=J.size()-(people+3);
                for(int l=0; l<size1; l++)
                {
                    //DECREMENTING ITERATOR TO AMOUNT OF SEATS TO REMOVE
                    it20--;
                }
                J.erase(it19, it20);
                it20=J.end();
                output << endl;
        }


    }
    }
}
else
{
    cout << "Error reading file" << endl;
}

cout << "Output file: WalmartOutput.csv" << endl;
//CLOSING FILES
input.close();
output.close();
    return 0;
}