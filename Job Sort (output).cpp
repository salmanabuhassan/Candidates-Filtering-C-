#include<iostream>
#include<fstream>
#include<string>
const int SIZE=200;

using namespace std;

int main ()
{
    ifstream age_f;
    ifstream course_f;
    ifstream gender_f;
    ifstream grade_f;
    ifstream name_f;
    ifstream uni_f;
    ifstream work_f;
    ifstream noname_f;
    
    int age[SIZE];
    int course[SIZE];
    int gender[SIZE];
    float grade[SIZE];
    string name[SIZE];
    string uni[SIZE];
    int work[SIZE];
    int noname[SIZE*6];
    
    int filter1_MinAge;
    int filter1_MaxAge;
    int filter2_Course;
    int filter3_Gender;
    float filter4_Grade;
    
    int x,y,num=0;
    
    age_f.open("age.txt");
    for (x=1;x<=SIZE;x++)
    {
       age_f >> age[x-1];
    }
    age_f.close();
    
    course_f.open("course.txt");
    for (x=1;x<=SIZE;x++)
    {
       course_f >> course[x-1];
    }
    course_f.close();
    
    gender_f.open("gender.txt");
    for (x=1;x<=SIZE;x++)
    {
       gender_f >> gender[x-1];
    }
    gender_f.close();
    
    
    grade_f.open("grade.txt");
    for (x=1;x<=SIZE;x++)
    {
       grade_f >> grade[x-1];
    }
    grade_f.close();
    
    name_f.open("name.txt");
    for (x=1;x<=SIZE;x++)
    {
       name_f >> name[x-1];
    }
    name_f.close();
    
    uni_f.open("uni.txt");
    for (x=1;x<=SIZE;x++)
    {
       uni_f >> uni[x-1];
    }
    uni_f.close();
    
    work_f.open("work.txt");
    for (x=1;x<=SIZE;x++)
    {
       work_f >> work[x-1];
    }
    work_f.close();
    
    noname_f.open("noname.txt");
    for (x=1;x<=SIZE;x++)
    {
       noname_f >> noname[x-1];
    }
    noname_f.close();
    
    cout<<"Hello Employee!"<<endl;
    
    cout<<"\n\n-Age-\nMinimum : ";
    cin>>filter1_MinAge;
    cout<<"Maximum : ";
    cin>>filter1_MaxAge;
    
    cout<<"\n\n-Course-"<<endl;
    cout<<"1  for Engineering\n2  for Medicine & HealthCare\n3  for Architecture";
    cout<<"\n4  for Laws\n5  for Computer Science\n6  for Islamic & Human Science";
	cout<<"\n7  for Economics\n8  for Science";
	cout<<"\nCourse (1-8) : ";
	cin>>filter2_Course;
	
	cout<<"\n\n-Gender-"<<endl;
	cout<<"1  for Male\n2  for Female\nGender : ";
	cin>>filter3_Gender;
	
	cout<<"\n\n-Grade-"<<endl;
	cout<<"Minimum Grade (0.0-4.0) : ";
	cin>>filter4_Grade;
	    
    cout<<"\n\n Result is below\n----------------------------------------------------------------------------------------------"<<endl;
    for(x=1;x<=SIZE;x++)
    {
       if(age[x-1]>=filter1_MinAge && age[x-1]<=filter1_MaxAge && course[x-1]==filter2_Course && gender[x-1]==filter3_Gender && grade[x-1]>=filter4_Grade)
       {
           num = num+noname[x-1];
           //cout<<"\n***num= "<<num<<" ***\n";
           cout<<"Name\t: ";
           
           for(y=num-noname[x-1];y<num;y++)
           {cout<<name[y]<<" ";}
           
           cout<<"\nUni\t: "<<uni[x-1]<<endl; 
           cout<<"Grade\t: "<<grade[x-1]<<endl;
           cout<<"Preferred working state\t: ";
           if(work[x-1]=1)
           {cout<<"Selangor"<<endl;}
           else if(work[x-1]=2)
           {cout<<"Kuala Lumpur"<<endl;}
           else if(work[x-1]=3)
           {cout<<"Perak"<<endl;}
           else if(work[x-1]=4)
           {cout<<"Melaka"<<endl;}
           else if(work[x-1]=5)
           {cout<<"Perlis"<<endl;}
           else if(work[x-1]=6)
           {cout<<"Kedah"<<endl;}
           else if(work[x-1]=7)
           {cout<<"Negeri Sembilan"<<endl;}
           else if(work[x-1]=8)
           {cout<<"Terengganu"<<endl;}
           else if(work[x-1]=9)
           {cout<<"Kelantan"<<endl;}
           else if(work[x-1]=10)
           {cout<<"Pahang"<<endl;}
           else if(work[x-1]=11)
           {cout<<"Johor"<<endl;}
           else if(work[x-1]=12)
           {cout<<"Sabah"<<endl;}
           else if(work[x-1]=13)
           {cout<<"Sarawak"<<endl;}
           else if(work[x-1]=14)
           {cout<<"Pulau Pinang"<<endl;}
           //cout<<"\n***num= "<<num<<" ***\n";
           cout<<"\n\n"<<endl;
       }
       else
       {}
    }
    
    
    cout<<"\n\n"<<name[0]<<endl;
    cout<<age[0]<<endl;
    cout<<course[0]<<endl;
    cout<<gender[0]<<endl;
    cout<<grade[0]<<endl;
    cout<<uni[0]<<endl;
    cout<<work[0]<<endl;
    
    system ("pause");
    return 0;
    
}
    
    
    
