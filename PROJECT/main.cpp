#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class viewstudent{
	protected:
		char c[3000];
		string a,b,d;
		public:
			void detailss(){
				stud:
				cout<<"\nEnter the class name(IN CAPITAL LETTER):";
				cin>>a;
				cout<<"\nEnter the section(IN CAPITAL LETTER):";
				cin>>b;
				d=a+"-"+b+".txt";
				ifstream f(d);
				if(f.good()){
                        f.read((char*)&c,sizeof(c));
                        cout<<c;
                        f.close();
			}
			else
			cout<<"\nClass not found try again";
			goto stud;
		}
};
class markview {
protected:
    string a1, b, c1, d;
    char c[3000];
public:
    void viewmark() {
    	markk:
        cout << "\nEnter the exam name:";
        cin >> c1;
        cout << "\nEnter the class:";
        cin >> a1;
        cout << "\nEnter the section:";
        cin >> b;
        d = a1 + b + c1 + ".txt";
        ifstream f(d);
				if(f.good()){
                        f.read((char*)&c,sizeof(c));
                        cout<<c;
                        f.close();
			}
			else{
			cout<<"\nClass not found try again";
			goto markk;}
		}
};
class marks:public markview{
	protected:
		string f[3000];
		int n;
		string a,b,c,d;
		public:
			void mark2(){
				viewmark();
			}
			void mark(){
				cout<<"Enter the exam name:";
				cin>>c;
				cout<<"Enter the class:";
				cin>>a;
				cout<<"Enter the section:";
				cin>>b;
				d=a+b+c+".txt";
				if(a=="ece"||a=="ECE"){
					if(b=="a"||b=="A"){
	                     ifstream f1("ECE-A.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else if(b=="b"||b=="B"){
						ifstream f1("ECE-B.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else if(b=="c"||b=="C"){
						ifstream f1("ECE-C.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else{
					cout<<"Invalid section";
					cout<<"\nPlease try again";
				}						
}
else if(a=="eee"||a=="EEE"){
	if(b=="a"||b=="A"){
	                     ifstream f1("EEE-A.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else if(b=="b"||b=="B"){
						ifstream f1("EEE-B.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else{
					cout<<"Invalid section";
					cout<<"\nPlease try again";	
				}	
}
else if(a=="mech"||a=="MECH"){
	if(b=="a"||b=="A"){
	                     ifstream f1("MECH-A.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else if(b=="b"||b=="B"){
						ifstream f1("MECH-B.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else{
					cout<<"Invalid section";
					cout<<"\nPlease try again";	
				}	
}
else if(a=="it"||a=="IT"){
	if(b=="a"||b=="A"){
	                     ifstream f1("IT-A.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else if(b=="b"||b=="B"){
						ifstream f1("IT.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else{
					cout<<"Invalid section";
					cout<<"\nPlease try again";	
				}	
}
else if(a=="cse"||a=="CSE"){
					if(b=="a"||b=="A"){
	                     ifstream f1("CSE-A.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else if(b=="b"||b=="B"){
						ifstream f1("CSE-B.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else if(b=="c"||b=="C"){
						ifstream f1("CSE-C.txt");
	                     ofstream f2(d);
	                     int i=0;
	                     while(!f1.eof()){
			   	            f1>>f[i];
				            i++;
			                }
			            cout<<"Enter the number of subjects:";
			            cin>>n;
			            int m[n];
			            for(int j=0;j<i-1;j=j+5){
			            	cout<<"Enter the marks for  "<<f[j];
			            	f2<<f[j];
			            	for(int k=0;k<n;k++){
			            		cout<<"\nEnter the marks for subject "<<k+1<<":";
			            		cin>>m[k];
			            		f2<<"\t"<<m[k];
							}
							f2<<"\n";
						}
						f1.close();
						f2.close();
					}
					else{
					cout<<"Invalid section";
					cout<<"\nPlease try again";
				}	
						
}
else{
	cout<<"Invalid class";
	cout<<"\nPlease try again";
}
}
};
class sectionprocess{
	protected:
		string f[30000];
		public:
			void eee(){
				ofstream f1("EEE-A.txt",ios::app);
				ofstream f2("EEE-B.txt",ios::app);
				ifstream f3("EEE.txt",ios::app);
				int i=0;
			   while(!f3.eof()){
			   	 f3>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="a"){
				     f1<<f[j-2];
				     f1<<"\t"<<f[j-1];
				     f1<<"\t"<<f[j];
				     f1<<"\t"<<f[j+1];
				     f1<<"\t"<<f[j+2];
				     f1<<"\n";
				 }
				 if(f[j]=="b"){
				     f2<<f[j-2];
				     f2<<"\t"<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			f3.close();	
}
void ece(){
				ofstream f1("ECE-A.txt",ios::app);
				ofstream f2("ECE-B.txt",ios::app);
				ofstream f3("ECE-c.txt",ios::app);
				ifstream f4("ECE.txt",ios::app);
				int i=0;
			   while(!f4.eof()){
			   	 f4>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="a"){
				     f1<<f[j-2];
				     f1<<"\t"<<f[j-1];
				     f1<<"\t"<<f[j];
				     f1<<"\t"<<f[j+1];
				     f1<<"\t"<<f[j+2];
				     f1<<"\n";
				 }
				 if(f[j]=="b"){
				     f2<<f[j-2];
				     f2<<"\t"<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\n";
				 }
				 if(f[j]=="c"){
				     f3<<f[j-2];
				     f3<<"\t"<<f[j-1];
				     f3<<"\t"<<f[j];
				     f3<<"\t"<<f[j+1];
				     f3<<"\t"<<f[j+2];
				     f3<<"\n";
				 }
			}
			f1.close();
			f2.close();
			f3.close();	
			f4.close();
		}
		void cse(){
				ofstream f1("CSE-A.txt",ios::app);
				ofstream f2("CSE-B.txt",ios::app);
				ofstream f3("CSE-c.txt",ios::app);
				ifstream f4("CSE.txt",ios::app);
				int i=0;
			   while(!f4.eof()){
			   	 f4>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="a"){
				     f1<<f[j-2];
				     f1<<"\t"<<f[j-1];
				     f1<<"\t"<<f[j];
				     f1<<"\t"<<f[j+1];
				     f1<<"\t"<<f[j+2];
				     f1<<"\n";
				 }
				 if(f[j]=="b"){
				     f2<<f[j-2];
				     f2<<"\t"<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\n";
				 }
				 if(f[j]=="c"){
				     f3<<f[j-2];
				     f3<<"\t"<<f[j-1];
				     f3<<"\t"<<f[j];
				     f3<<"\t"<<f[j+1];
				     f3<<"\t"<<f[j+2];
				     f3<<"\n";
				 }
			}
			f1.close();
			f2.close();
			f3.close();	
			f4.close();
		}
		void mech(){
				ofstream f1("MECH-A.txt",ios::app);
				ofstream f2("MECH-B.txt",ios::app);
				ifstream f3("MECH.txt",ios::app);
				int i=0;
			   while(!f3.eof()){
			   	 f3>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="a"){
				     f1<<f[j-2];
				     f1<<"\t"<<f[j-1];
				     f1<<"\t"<<f[j];
				     f1<<"\t"<<f[j+1];
				     f1<<"\t"<<f[j+2];
				     f1<<"\n";
				 }
				 if(f[j]=="b"){
				     f2<<f[j-2];
				     f2<<"\t"<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			f3.close();	
}
void itt(){
				ofstream f1("IT-A.txt",ios::app);
				ofstream f2("IT-B.txt",ios::app);
				ifstream f3("IT.txt",ios::app);
				int i=0;
			   while(!f3.eof()){
			   	 f3>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="a"||f[j]=="A"){
				     f1<<f[j-2];
				     f1<<"\t"<<f[j-1];
				     f1<<"\t"<<f[j];
				     f1<<"\t"<<f[j+1];
				     f1<<"\t"<<f[j+2];
				     f1<<"\n";
				 }
				 if(f[j]=="b"){
				     f2<<f[j-2];
				     f2<<"\t"<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			f3.close();	
}
};
class studentprocess:public sectionprocess{
	protected:
		string f[3000];
		public:
			void processece(){
				ifstream f1("student.txt");
				ofstream f2("ECE.txt",ios::app);
				int i=0;
			   while(!f1.eof()){
			   	 f1>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="ece"){
				     f2<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\t"<<f[j+3];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			ece();
		}
		void processcse(){
				ifstream f1("student.txt",ios::app);
				ofstream f2("CSE.txt",ios::app);
				int i=0;
			   while(!f1.eof()){
			   	 f1>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="cse"){
				     f2<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\t"<<f[j+3];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			cse();
}
void processeee(){
				ifstream f1("student.txt",ios::app);
				ofstream f2("EEE.txt",ios::app);
				int i=0;
			   while(!f1.eof()){
			   	 f1>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="eee"){
				     f2<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\t"<<f[j+3];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			eee();
		}
		void processmech(){
				ifstream f1("student.txt",ios::app);
				ofstream f2("MECH.txt",ios::app);
				int i=0;
			   while(!f1.eof()){
			   	 f1>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="mech"){
				     f2<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\t"<<f[j+3];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			mech();
		}
		void processit(){
				ifstream f1("student.txt",ios::app);
				ofstream f2("IT.txt",ios::app);
				int i=0;
			   while(!f1.eof()){
			   	 f1>>f[i];
				  i++;
			}
			for(int j=0;j<i;j++){
				if(f[j]=="it"){
				     f2<<f[j-1];
				     f2<<"\t"<<f[j];
				     f2<<"\t"<<f[j+1];
				     f2<<"\t"<<f[j+2];
				     f2<<"\t"<<f[j+3];
				     f2<<"\n";
				 }
			}
			f1.close();
			f2.close();
			itt();
		}
};
class addstudent:public studentprocess{
	protected:
		   string nnn,dd,ss;
		   long int aa;
		   long long int mm;
		public:
			void adds(){
				cout<<"\nEnter the name:";
				cin>>nnn;
				cout<<"\nEnter the department:";
				cin>>dd;
				cout<<"\nEnter the section:";
				cin>>ss;
				cout<<"\nEnter the admission number:";
				cin>>aa;
				cout<<"\nEnter the mobile number:";
				cin>>mm;
				ofstream f1("student.txt",ios::app);
				ofstream f3("ECE.txt",ios::trunc);
				ofstream f4("ECE-A.txt",ios::trunc);
				ofstream f5("ECE-B.txt",ios::trunc);
				ofstream f6("ECE-C.txt",ios::trunc);
				ofstream f7("EEE.txt",ios::trunc);
				ofstream f8("EEE-A.txt",ios::trunc);
				ofstream f9("EEE-B.txt",ios::trunc);
				ofstream f10("MECH.txt",ios::trunc);
				ofstream f11("MECH-A.txt",ios::trunc);
				ofstream f12("MECH-B.txt",ios::trunc);
				ofstream f13("IT.txt",ios::trunc);
				ofstream f14("IT-A.txt",ios::trunc);
				ofstream f15("IT-B.txt",ios::trunc);
				ofstream f16("CSE.txt",ios::trunc);
				ofstream f17("CSE-A.txt",ios::trunc);
				ofstream f18("CSE-B.txt",ios::trunc);
				ofstream f19("CSE-C.txt",ios::trunc);
				     f1<<nnn;
				     f1<<"\t"<<dd;
				     f1<<"\t"<<ss;
				     f1<<"\t"<<aa;
				     f1<<"\t"<<mm;
				     f1<<"\n";
				     f1.close();
				     f3.close();
				     f4.close();
				     f5.close();
				     f6.close();
				     f7.close();
				     f8.close();
				     f9.close();
				     f10.close();
				     f11.close();
				     f12.close();
				     f13.close();
				     f14.close();
				     f15.close();
				     f16.close();
				     f17.close();
				     f18.close();
				     f19.close();
				     processece();
				     processmech();
				     processeee();
				     processcse();
				     processit();
			}
};
class addteacher{
	protected:
		    string c,d,f;
		    long long int e;
		    long int g;
		public:
			void addt(){
				cout<<"\nEnter the name:";
				cin>>c;
				cout<<"\nEnter the department:";
				cin>>d;
				cout<<"\nEnter the mobile number:";
				cin>>e;
				cout<<"\nEnter the designation:";
				cin>>f;
				cout<<"\nEnter the id number:";
				cin>>g;
				ofstream f1("Teacher.txt",ios::app);
				ofstream f2("teacherusername.txt",ios::app);
				     f1<<c;
				     f1<<"\t"<<d;
				     f1<<"\t"<<e;
				     f1<<"\t"<<f;
				     f1<<"\t"<<g;
				     f1<<"\n";
				     f2<<g;
				     f2<<"\t"<<e;
				     f2<<"\n";
				     f1.close();
				     f2.close();
			}
};
class studentlogin{
	protected:
		string abb[5000];
		string ab;
		string acc;
		string aa;
		string bb;
		string cc,dd,ee;
		int jj=1;
		public:
			void login2(){
				student:
				cout<<"\nEnter user id:";
				cin>>ab;
				cout<<"\nEnter the password:";
				cin>>acc;
				ifstream f("student.txt");
			   int i=0;
			   while(!f.eof()){
			   	 f>>abb[i];
				  i++;
			}
			f.close();
			int k=0;
			for(int j=0;j<i;j++){
				if(abb[j]==ab&&abb[j+1]==acc)
				{
				cout<<"Login Successful";
				cout<<"\nYou have login as "<<abb[j-3];
				cc=abb[j-3];
				aa=abb[j-2];
				bb=abb[j-1];
				dd=abb[j];
				ee=abb[j+1];
				k++;
				int n;
				student1:
				cout<<"\n1.View your details\n2.exit";
				cout<<"\nPlease select your option:";
				cin>>n;
				switch(n){
					case 1:
						cout<<"\nName:"<<cc;
						cout<<"\nDepartment:"<<aa;
						cout<<"\nSection:"<<bb;
						cout<<"\nAdmission Number:"<<dd;
						cout<<"\nMobile number:"<<ee;
						goto student1;
					case 2:
					     cout<<"\n^^^^Thanks for login^^^^";
					cout<<"\n~~~~GOOD BYE~~~~";
					break;
					default:
						cout<<"\n$$$$Invalid choice$$$$";
			            cout<<"\nPlease try again\n";
			            goto student1;	
				}
			    }
			}
			if(k==0){
				if(jj<3){
					cout<<"Username or password is wrong";
				    cout<<"\nPlease try again";
				    jj++;
					goto student;
					}
					else{
						cout<<"You have reached the limit of login attempts";
					}
			}
		}
};
class teacherlogin:protected addstudent,marks,viewstudent{
	protected:
		string fg;
		string fgg;
		string abb[3000];
		int jj=1;
		public:
			void login1(){
				teacher:
				cout<<"\nEnter user id:";
				cin>>fgg;
				cout<<"\nEnter the password:";
				cin>>fg;
				ifstream f("teacher.txt");
			   int ii=0;
			   while(!f.eof()){
			   	 f>>abb[ii];
				  ii++;
			}
			f.close();
		    int kkk=0;
			for(int j=0;j<ii;j++){
				if(abb[j]==fgg&&abb[j-2]==fg)
				{
				cout<<"Login Successful";
				cout<<"\nYou have login as "<<abb[j-4];
				kkk++;
				teacher1:
				int nn;
				cout<<"\n1.Add student\n2.Update Marks\n3.View marks\n4.view student details\n5.exit\n";
				cout<<"\nPlease enter your choice";
				cin>>nn;
				switch(nn){
					case 1:
						adds();
						cout<<"\nPlease select any other option";
						goto teacher1;
					case 2:
						mark();
						cout<<"\nPlease select any other option";
						goto teacher1;
					case 3:
						mark2();
						cout<<"\nPlease select any other option";
						goto teacher1;
					case 4:
						detailss();
						cout<<"\nPlease select any other option";
						goto teacher1;
					case 5:
					cout<<"\n^^^^Thanks for login^^^^";
					cout<<"\n~~~~GOOD BYE~~~~";
					break;
					default:
						cout<<"\n$$$$Invalid choice$$$$";
			            cout<<"\nPlease try again\n";
			            goto teacher1;
				}
			    }
			}
			if(kkk==0){
				if(jj<3){
					cout<<"Username or password is wrong";
				    cout<<"\nPlease try again";
				    jj++;
					goto teacher;
					}
					else{
						cout<<"You have reached the limit of login attempts";
					}
			}
	}
};
class admin  : protected addteacher,viewstudent,markview{
	protected:
		string a[2],b[2];
		public:
			void login(){
			   ifstream f("Admin.txt");
			   int i=0;
			   while(!f.eof()){
				  f>>a[i];
				  i++;
			}
			f.close();
			int j=1;
admin:
			cout<<"\nEnter the username:";
			cin>>b[0];
			cout<<"\nEnter the password:";
			cin>>b[1];
			if(a[0]==b[0]&&b[1]==a[1]){
				int n;
				cout<<"Login Successful";
				admin1:
				cout<<"\n1.Add Teacher\n2.view student details\n3.view mark\n4.exit";
				cout<<"\nEnter your choice:";
				cin>>n;
				switch(n){
					case 1:
					addt();
					cout<<"\nSelect Other option:";
					goto admin1;
					case 2:
						detailss();
						cout<<"\nPlease select any other option";
						goto admin1;
			        case 3:
			        	viewmark();
			        	 cout<<"\nPlease select any other option";
						 goto admin1; 
					case 4:
					cout<<"\n^^^^Thanks for login^^^^";
					cout<<"\n~~~~GOOD BYE~~~~";
					break;
					default:
					cout<<"\n$$$$Invalid choice$$$$";
			        cout<<"\nPlease try again\n";
			        goto admin1;
				}
				}
				else{
				if(j<3){
					cout<<"Username or password is wrong";
				    cout<<"\nPlease try again";
				    j++;
					goto admin;
					}
					else{
						cout<<"You have reached the limit of login attempts";
					}
			}
		}
};
int main(){
	int n;
	admin a;
	studentlogin s;
	teacherlogin t;
menu:
	cout<<"*******WELCOME TO JS COLLEGE********";
	cout<<"\n1.PRINCIPAL LOGIN\n2.TEACHER LOGIN\n3.STUDENT LOGIN";
	cout<<"\n\nPlease enter your choice: ";
	cin>>n;
	switch(n){
		case 1:
			a.login();
			break;
		case 2:
			t.login1();
			break;
		case 3:
			s.login2();
			break;
		default:
			cout<<"\n$$$$Invalid choice$$$$";
			cout<<"\nPlease try again\n";
			goto menu;
	}
	}  
