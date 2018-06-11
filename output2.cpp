//OUTPUT
#include<iostream>
#include<fstream>
#include<string>
const int SIZE=500;

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
    
    int age[SIZE];
    int course[SIZE];
    int gender[SIZE];
    float grade[SIZE];
    string name[SIZE];
    string uni[SIZE];
    int work[SIZE];
    string major;
    
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
       getline(name_f,name[x-1]);
    }
    name_f.close();
    
    uni_f.open("uni.txt");
    for (x=1;x<=SIZE;x++)
    {
       getline(uni_f,uni[x-1]);
    }
    uni_f.close();
    
    work_f.open("work.txt");
    for (x=1;x<=SIZE;x++)
    {
       work_f >> work[x-1];
    }
    work_f.close();
    
    
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
	cout<<"Minimum Grade (2.0-4.0) : ";
	cin>>filter4_Grade;
	    
    cout<<"\n\n Result is below\n----------------------------------------------------------------------------------------------"<<endl;
    y=1;
    for(x=1;x<=SIZE;x++)
    {
                        
       if(age[x-1]>=filter1_MinAge && age[x-1]<=filter1_MaxAge && course[x-1]==filter2_Course 
       && gender[x-1]==filter3_Gender && grade[x-1]>=filter4_Grade)
       
       {
           
           cout<<"Candidate #"<<y;
           cout<<"\nName\t: "<<name[x-1]<<endl;
           cout<<"Uni\t: "<<uni[x-1]<<endl; 
           cout<<"Grade\t: "<<grade[x-1]<<endl;
           cout<<"Preferred working state\t: ";
              	switch(work[x-1])
	{
	case 1  :cout<<"Selangor";break;
	case 2  :cout<<"Kuala Lumpur";break;
	case 3  :cout<<"Perak";break;
	case 4  :cout<<"Melaka";break;
	case 5  :cout<<"Perlis";break;
	case 6  :cout<<"Kedah";break;
	case 7  :cout<<"Negeri Sembilan";break;
	case 8  :cout<<"Terengganu";break;
	case 9  :cout<<"Kelantan";break;
	case 10 :cout<<"Pahang";break;
	case 11 :cout<<"Johor";break;
	case 12	:cout<<"Sabah";break;
	case 13	:cout<<"Sarawak";break;
	case 14	:cout<<"Pulau Pinang";break;
}
       y++;
           cout<<"\n\n"<<endl;
       }
       else
       {}
    } 

  //  system("pause");
    return 0;
    
}

