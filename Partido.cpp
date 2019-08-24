#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include<iostream> 
#include<string> 
#include <fstream>
#include <stdlib.h>

using namespace std;

#ifndef Partido_CPP
#define Partido_CPP

class Partido{
	private:
		int pj;
		int pg;
		int pe;
		int pp;
		int gf;
		int gc;
		int dg;
		int pt;
	public:
		Partido(){
			this->pj=0;
			this->pg=0;
			this->pe=0;
			this->pp=0;
			this->gf=0;
			this->gc=0;
			this->dg=0;
			this->pt=0;
		}
		
		int getPj(){
			return pj;
		}
		
		void setPj(int pj){
			this->pj=pj;
		}
		
		int getPg(){
			return pg;
		}
		
		void setPg(int pg){
			this->pg=pg;
		}
		
		int getPe(){
			return pe;
		}
		
		void setPe(int pe){
			this->pe=pe;
		}
		
		int getPp(){
			return pp;
		}
		
		void setPp(int pp){
			this->pp=pp;
		}
		
		int getGf(){
			return gf;
		}
		
		void setGf(int gf){
			this->gf=gf;
		}
		
		int getGc(){
			return gc;
		}
		
		void setGc(int gc){
			this->gc=gc;
		}
		
		int getDg(){
			return dg;
		}
		
		void setDg(int dg){
			this->dg=dg;
		}
		
		int getPt(){
			return pt;
		}
		
		void setPt(int pt){
			this->pt=pt;
		}
		
		void print(){
			cout<<setw(10)<<pj<<setw(5)<<pg<<setw(5)<<pe<<setw(5)<<pp<<setw(5)<<gf<<setw(5)<<gc<<setw(5)<<dg<<setw(5)<<pt<<endl;
		}
};

#endif
