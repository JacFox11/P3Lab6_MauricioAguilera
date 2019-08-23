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
		}
		
		Partido(int pj, int pg, int pe, int pp, int gf, int gc, int dg, int pt){
			this->pj=pj;
			this->pg=pg;
			this->pe=pe;
			this->pp=pp;
			this->gf=gf;
			this->gc=gc;
			this->dg=dg;
			this->pt=pt;
		}
		
		int getPj(){
			return pj;
		}
		
		void setPj(){
			this->pj=pj;
		}
		
		int getPg(){
			return pg;
		}
		
		void setPg(){
			this->pg=pg;
		}
		
		int eetPe(){
			return pe;
		}
		
		void setPe(){
			this->pe=pe;
		}
		
		int getPp(){
			return pp;
		}
		
		void setPp(){
			this->pp=pp;
		}
		
		int getGf(){
			return gf;
		}
		
		void setGf(){
			this->gf=gf;
		}
		
		int getGc(){
			return gc;
		}
		
		void setGc(){
			this->gc=gc;
		}
		
		int getDg(){
			return dg;
		}
		
		void setDg(){
			this->dg=dg;
		}
		
		int getPt(){
			return pt;
		}
		
		void setPt(){
			this->pt=pt;
		}
		
		void print(){
			cout<<setw(10)<<pj<<setw(5)<<pg<<setw(5)<<pe<<setw(5)<<pp<<setw(5)<<gf<<setw(5)<<gc<<setw(5)<<dg<<setw(5)<<pt<<endl;
		}
};

#endif
