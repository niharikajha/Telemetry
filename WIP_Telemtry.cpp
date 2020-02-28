# include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

struct DataInput{
	char TimeInstance[40];
	float kilo;Volt;Current;
};


Class Time{
	string Instance;
	int hour;
	int min; 
	int sec;
	public:
		void MakeString_Time(this.Instance){

			
		}
		
		int TimeDifference(Time a, Time b){
			int TimeDiff;
			TimeDiff = abs(a.hour - b.hour)*60 + abs(a.min - b.min)*60 + abs(a.sec- b.sec);
			return(TimeDiff);
		}
		Time(string Instance);
};

Class DataDisplay{
	public:
	float kW;
	float V;
	float I;
	float kW_Avg;
	float V_Avg;
	float I_Avg;	
	Time::T(int hour, int min, int sec);
	Time::T
	bool DetectAnomaly(DataDisplay A, DataDisplay B){
		if ((Time::TimeDifference (A.T, B.T)) > 2)
			{
		      cout<<"Anomaly- time gap detected"<<endl;
		      return (1);
		  	}
		if ((this.kW <0)||(this.I <0)||(this.V > 480) || (this.V < -5 ))
			{
			  cout <<"Anomaly in data detected" <<endl;	
			  return (1);
		}
	}
	void print(DataDisplay Prev)
	{
		if(DetectAnomaly(this,Prev))
		{
			
		}
		else
		{
			cout<<this.T.hour<<"-"<<this.T.min<<"-"<<this.T.sec<<" "<<this.kW<<" "<<this.V<<" "<<this.I<<" "<<this.kW_Avg<<" "<< this.V_Avg<<" "<<this.I_Avg;
		}
	}
};
}
