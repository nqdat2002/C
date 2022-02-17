#include<bits/stdc++.h>
using namespace std;
//quan ly nhan vien partime
struct nhanvien{
	int manv;
	char tennv[25];
	int tuoi;
	char gt[10], que[25];
	int hcong, loi, luong;
};
struct nodenv{
	nhanvien infornv;
	struct nodenv*nvnext;
};
typedef struct list{
	nodenv*nvhead;
}LISTNV;
LISTNV NV;
void khoitaonv(LISTNV &NV){
	NV.nvhead=NULL;
	}
	nodenv *newnodenv(nhanvien &nv){
		nodenv*p= new nodenv;
		p->infornv= nv;
		p->nvnext= NULL;
		return p;
		}
	void nhapnv(nhanvien &nv){
		cout<<"Ma nhan vien: ";
		cin>>nv.manv;
		cin.ignore();
		cout<<"Ten nhan vien: ";
		gets(nv.tennv);
		cout<<"Gioi tinh: ";
		gets(nv.gt);
		cout<<"Tuoi: ";
		cin>>nv.tuoi;
		cin.ignore();
		cout<<"Que quan: ";
		gets(nv.que);
		cout<<"So gio cong: ";
		cin>>nv.hcong;
		cout<<"So loi mac phai: ";
		cin>>nv.loi;
	}
	void hiennv(nhanvien nv){
		 //   cout<<setw(5)<<"Ma nv"<<setw(20)<<"Ten nv"<<setw(18)<<"Gioi tinh"<<setw(18)<<"Que quan"<<setw(18)<<"Gio cong"<<setw(18)<<"Loi"<<setw(18)<<"Luong"<<endl;
		    cout<<setw(5)<<nv.manv<<setw(20)<<nv.tennv<<setw(19)<<nv.tuoi<<setw(19)<<nv.gt<<setw(18)<<nv.que<<setw(18)<<nv.hcong<<setw(18)<<nv.loi<<setw(18)<<nv.hcong*23000-nv.loi*10000<<endl;
		    }
		int IsEmptynv(){
		    if( NV.nvhead==NULL) {
			     return 0;
				 }else{
				 	   return 1;
				 }   
		    }
		void deletenv(LISTNV &NV){
			nodenv*p;
			if(IsEmptynv()==NULL){
				p=NV.nvhead;
				NV.nvhead->nvnext=NV.nvhead;
				delete p;
			}else{
			    cout<<"NULL!";
			}
		}
		void topnv(LISTNV NV){
			if(IsEmptynv()==0){
				cout<<"NULL!";
				}else{
				cout<<setw(5)<<"Ma nv"<<setw(20)<<"Ten nv"<<setw(19)<<"Tuoi"<<setw(18)<<"Gioi tinh"<<setw(18)<<"Que quan"<<setw(18)<<"Gio cong"<<setw(18)<<"Loi"<<setw(18)<<"Luong"<<endl;
				hiennv(NV.nvhead->infornv);
				}
			}
			void pushnv(nodenv*p){
			    if(IsEmptynv()==0){
				    NV.nvhead=p;
				}else{
			        p->nvnext=NV.nvhead;
					NV.nvhead=p;
				}	
			}
			void nhapdsnv(LISTNV &NV){
				int ok;
				nodenv*p;
				nhanvien nv;
				do{
					nhapnv(nv);
					p=newnodenv(nv);
					pushnv(p);
					p=p->nvnext;
					cout<<"CONTINUES OR NOT(1/0)?";
					cin>>ok;
				}while(ok!=0);
			}
			void hiendsnv(LISTNV NV){
				nodenv*p=NV.nvhead;
				cout<<setw(5)<<"Ma nv"<<setw(20)<<"Ten nv"<<setw(19)<<"Tuoi"<<setw(18)<<"Gioi tinh"<<setw(18)<<"Que quan"<<setw(18)<<"Gio cong"<<setw(18)<<"Loi"<<setw(18)<<"Luong"<<endl;
				while(p!=NULL){
					hiennv(p->infornv);
					p=p->nvnext;
				}
			}
			void luufnv(LISTNV NV){
				nhanvien nv;
				nodenv*p=NV.nvhead;
				fstream finv;
				cin.ignore();
				char tenf[25];
				cout<<"Nhap ten file muon luu: ";
				gets(tenf);
				finv.open(tenf, ios :: app | ios :: binary);
				while(p!=NULL){
					finv.write((char*)&p->infornv, sizeof(nv));
					p=p->nvnext;
				}
				finv.close();
			}
			void docfnv(LISTNV &NV){
				nhanvien nv;
				nodenv*p=NV.nvhead;
				cin.ignore();
				char tenf[25];
				cout<<"Nhap ten file muon mo: ";
				gets(tenf);
				fstream fonv;
				fonv.open(tenf, ios :: in | ios :: binary);
				if(fonv.fail()){
					cout<<"Mo file loi!";
                }else{
				    while(!fonv.eof()){
				    	fonv.read((char*)&nv,sizeof(nhanvien));
				    	p=newnodenv(nv);
				    	pushnv(p);
				    }
				    hiendsnv(NV);
				}
				fonv.close();
			}
			//tinh tong luong nhan vien
			int sumluong(LISTNV NV){
				nodenv*p=NV.nvhead;
				int s=0;
				while(p!=NULL){
					p->infornv.luong=p->infornv.hcong*23000-p->infornv.loi;
					s+=p->infornv.luong;
					p=p->nvnext;
				}					
			    return s;
			}
			//dem so nhan vien co do tuoi trong khoang t1 t2
			void demnv(LISTNV NV){
				int d=0,t1,t2;
				cout<<"Nhap do tuoi nhan vien can tim: ";
				cin>>t1>>t2;
				nodenv*p=NV.nvhead;
				while(p!=NULL){
					if(p->infornv.tuoi>t1 && p->infornv.tuoi<t2){
						d++;
					}
					p=p->nvnext;
				}
				cout<<"So luong nhan vien co do tuoi tu "<<t1<<"-"<<t2<<":"<<d<<endl;
			}
			//tim nhan vien theo ten nhan vien
			void searchname(LISTNV NV){
				nodenv*p=NV.nvhead;
				cin.ignore();
				char name[25];
				cout<<"Nhap ten nv can tim: ";
				gets(name);
				cout<<setw(5)<<"Ma nv"<<setw(20)<<"Ten nv"<<setw(19)<<"Tuoi"<<setw(18)<<"Gioi tinh"<<setw(18)<<"Que quan"<<setw(18)<<"Gio cong"<<setw(18)<<"Loi"<<setw(18)<<"Luong"<<endl;
				while(p!=NULL){
					if(strstr(strlwr(p->infornv.tennv),strlwr(name))!=NULL){
						hiennv(p->infornv);
					}
					p=p->nvnext;
				}
			} 
			int maxlg(LISTNV NV){
				nodenv*p=NV.nvhead;
				int maxx=-1;
				while(p!=NULL){
					p->infornv.luong=p->infornv.hcong*23000-p->infornv.loi;
					maxx=max(p->infornv.luong,maxx);
					p=p->nvnext;
				}
				return maxx;
			}
			void hienmax(LISTNV NV){
				nodenv*p=NV.nvhead;
				int maxx=maxlg(NV);
				cout<<setw(5)<<"Ma nv"<<setw(20)<<"Ten nv"<<setw(19)<<"Tuoi"<<setw(18)<<"Gioi tinh"<<setw(18)<<"Que quan"<<setw(18)<<"Gio cong"<<setw(18)<<"Loi"<<setw(18)<<"Luong"<<endl;
				while(p!=NULL){
					p->infornv.luong=p->infornv.hcong*23000-p->infornv.loi;
					if(p->infornv.luong==maxx){
						hiennv(p->infornv);
					}
					p=p->nvnext;
				}
			}
			//Hien nhan vien  co luong thap nhat
		    int minlg(LISTNV NV){
		    	nodenv*p=NV.nvhead;
		    	NV.nvhead->infornv.luong=NV.nvhead->infornv.hcong*23000-NV.nvhead->infornv.loi;
		    	int minn=NV.nvhead->infornv.luong;
		    	while(p!=NULL){
		    		p->infornv.luong=p->infornv.hcong*23000-p->infornv.loi;
		    		minn=min(p->infornv.luong, minn);
		    		p=p->nvnext;
		    	}
		    	return minn;
		    }
		    void hienmin(LISTNV NV){
		    	nodenv*p=NV.nvhead;
		    	int minn=minlg(NV);
		    	cout<<setw(5)<<"Ma nv"<<setw(20)<<"Ten nv"<<setw(19)<<"Tuoi"<<setw(18)<<"Gioi tinh"<<setw(18)<<"Que quan"<<setw(18)<<"Gio cong"<<setw(18)<<"Loi"<<setw(18)<<"Luong"<<endl;
		    	while(p!=NULL){
		    		p->infornv.luong=p->infornv.hcong*23000-p->infornv.loi;
					if(p->infornv.luong==minn){
						hiennv(p->infornv);
					}
					p=p->nvnext;
				}
			}
			void pop(LISTNV NV){
				nodenv*p;
				if(IsEmptynv()!=NULL){
					p=NV.nvhead;
					NV.nvhead=NV.nvhead->nvnext;
					delete p;
				}else{
					cout<<"NULL";
				}
			}
			struct sach{
				int mas;
				char tentg[25];
				char tens[25],tennxb[25];
				int solg, dongia;
				int ngays, thangs, nams;
			};
			struct nodes{
				sach infors;
				struct nodes*snext;
			};
			typedef struct stack{
				nodes*shead;
			}STACK;
			STACK S;
			void khoitaos(STACK &S){
				S.shead=NULL;
			}
			void nhapsach(sach &sa){
				cout<<"Ma sach: ";
				cin>>sa.mas;
				cin.ignore();
				cout<<"Ten sach: ";
				gets(sa.tens);
				cout<<"Ten TG: ";
				gets(sa.tentg);
				cout<<"Ten NXB: ";
				gets(sa.tennxb);
				cout<<"Ngay xuat ban: ";
				cin>>sa.ngays>>sa.thangs>>sa.nams;
				cout<<"So luong: ";
				cin>>sa.solg;
				cout<<"Don gia: ";
				cin>>sa.dongia;
			}
			void hiensach(sach sa){
			//	cout<<setw(5)<<"Ma sach"<<setw(16)<<"Ten sach"<<setw(16)<<"Ten TG"<<setw(16)<<"Ten NXB"<<setw(21)<<"Ngay XB"<<setw(17)<<"So luong"<<setw(16)<<"Don gia"<<endl;
				cout<<setw(6)<<sa.mas<<setw(17)<<sa.tens<<setw(16)<<sa.tentg<<setw(16)<<sa.tennxb<<setw(16)<<sa.ngays<<"/"<<sa.thangs<<"/"<<sa.nams<<setw(15)<<sa.solg<<setw(15)<<sa.dongia<<endl;
			}
			nodes*newnodes( sach &sa){
				nodes*p= new nodes;
				if(p==NULL){
					cout<<"NOT ENOUGHT MEMORY!!";
				}
				p->infors= sa;
				p->snext=NULL;
				return p;
			}
			int isemptys(){
				if(S.shead==NULL){
					return 0;
				}else return 1;
			}
			void pushs( nodes*neww){
				if(isemptys()==0){
					S.shead=neww;
				}else{
				    neww->snext=S.shead;
				    S.shead=neww;
				}
			}
			void nhapdssach(STACK &S){
				nodes*p;
				sach sa;
				int ok;
				do{
					nhapsach(sa);
					p=newnodes(sa);
					pushs(p);
					cout<<"COTINUES OR NOT?";
					cin>>ok;
				}while(ok!=0);
			}
			void hiendssach(STACK S){
				nodes*p=S.shead;
				cout<<setw(5)<<"Ma sach"<<setw(16)<<"Ten sach"<<setw(16)<<"Ten TG"<<setw(16)<<"Ten NXB"<<setw(21)<<"Ngay XB"<<setw(17)<<"So luong"<<setw(16)<<"Don gia"<<endl;
				while(p!=NULL){
					hiensach(p->infors);
					p=p->snext;
				}
			}
			void pops(STACK &S){
				if(isemptys()==0){
					cout<<"NULL";
				}else{
				    nodes*p=S.shead;
				    S.shead=S.shead->snext;
				    delete p; 
				}
			}
			void luufsach(STACK S){
				sach sa;
				nodes*p=S.shead;
				cin.ignore();
				cout<<"Nhap ten file muon luu: ";
				char tenf[25];
				gets(tenf);
				fstream fis;
				fis.open(tenf, ios:: app|ios:: binary);
				while(p!=NULL){
					fis.write((char*)&p->infors, sizeof(sach));
					p=p->snext;
				}
				fis.close();
			}
			void docfsach(STACK &S){
				nodes*p;
				sach sa;
				cin.ignore();
				char tenf[25];
				cout<<"Nhap ten file muon doc: ";
				gets(tenf);
				fstream fos;
				fos.open(tenf, ios:: in|ios:: binary);
				if(fos.fail()){
					cout<<"Loi Mo Tep!";
				}else{
				    while(!fos.eof()){
				    	fos.read((char*)&sa, sizeof(sach));
				    	p=newnodes(sa);
				    	pushs(p);
				}
			}
			fos.close();
		}
		void top(STACK S){
			if(isemptys()==0){
				cout<<"NULL";
			}else{
			    cout<<setw(5)<<"Ma sach"<<setw(16)<<"Ten sach"<<setw(16)<<"Ten TG"<<setw(16)<<"Ten NXB"<<setw(17)<<"So luong"<<setw(16)<<"Don gia"<<endl;
			    hiensach(S.shead->infors);
			}
		}
		int sumslg(STACK S){
			nodes*p=S.shead;
			int s=0;
			while(p!=NULL){
				s+=p->infors.solg;
				p=p->snext;
			}
			return s;
		}
		void samenxb( STACK S){
			nodes*p=S.shead;
			int d=0;
			cin.ignore();
			char nxb[25];
			cout<<"Nhap ten NXB: ";
			gets(nxb);
			while(p!=NULL){
				if(strcmp(p->infors.tennxb, nxb)==0){
					d++;
				}
				p=p->snext;
			}
			cout<<"So sach cua nha xuat ban "<<nxb<<":"<<d<<endl;
		}
		void sameyear(STACK S){
			nodes*p=S.shead;
			int namx, d=0;
			cout<<"Nhap nam xuat ban can tim: ";
			cin>>namx;
			while(p!=NULL){
				if(p->infors.nams==namx){
					d++;
				}
				p=p->snext;
			}
			cout<<"So luong sach xuat ban nam "<<namx<<":"<<d<<endl;
		}
		int minslg(STACK S){
			nodes*p=S.shead;
			int minn=S.shead->infors.solg;
			while(p!=NULL){
				minn=min(p->infors.solg, minn);
				p=p->snext;
			}
			return minn;
		}
		void hienmins(STACK S){
			nodes*p=S.shead;
			int minn=minslg(S);
			cout<<"Thong tin sach co so luong it nhat: "<<endl;
			cout<<setw(5)<<"Ma sach"<<setw(16)<<"Ten sach"<<setw(16)<<"Ten TG"<<setw(16)<<"Ten NXB"<<setw(21)<<"Ngay XB"<<setw(17)<<"So luong"<<setw(16)<<"Don gia"<<endl;
			while(p!=NULL){
				if(p->infors.solg==minn){
					hiensach(p->infors);
				}
				p=p->snext;
			}
		}
		int maxslg(STACK S){
			nodes*p=S.shead;
			int maxx=-1;
			while(p!=NULL){
				maxx=max(p->infors.solg, maxx);
				p=p->snext;
			}
			return maxx;
		}
		void hienmaxs(STACK S){
			nodes*p=S.shead;
			int maxx=maxslg(S);
			cout<<"Thong tin sach co so luong nhieu nhat: "<<endl;
			cout<<setw(5)<<"Ma sach"<<setw(16)<<"Ten sach"<<setw(16)<<"Ten TG"<<setw(16)<<"Ten NXB"<<setw(21)<<"Ngay XB"<<setw(17)<<"So luong"<<setw(16)<<"Don gia"<<endl;
			while(p!=NULL){
				if(p->infors.solg==maxx){
					hiensach(p->infors);
				}
				p=p->snext;
			}
		}			
	    void hieng1g2(STACK S){
	    	nodes*p=S.shead;
	    	int g1, g2;
	    	cout<<"Nhap khoang don gia: ";
	    	cin>>g1>>g2;
	    	cout<<setw(5)<<"Ma sach"<<setw(16)<<"Ten sach"<<setw(16)<<"Ten TG"<<setw(16)<<"Ten NXB"<<setw(21)<<"Ngay XB"<<setw(17)<<"So luong"<<setw(16)<<"Don gia"<<endl;
		    while(p!=NULL){
		    	if(p->infors.dongia>g1 && p->infors.dongia<g2){
		    		hiensach(p->infors);
		    	}
		    	p=p->snext;
		    }
		}
		void searchtens(STACK S){
			nodes*p=S.shead;
			cin.ignore();
			char names[25];
			cout<<"Nhap ten sach ban muon tim: ";
			gets(names);
			cout<<setw(5)<<"Ma sach"<<setw(16)<<"Ten sach"<<setw(16)<<"Ten TG"<<setw(16)<<"Ten NXB"<<setw(21)<<"Ngay XB"<<setw(17)<<"So luong"<<setw(16)<<"Don gia"<<endl;
			while(p!=NULL){
			   	if(strstr(strlwr(p->infors.tens), strlwr(names))!=NULL){
			   		hiensach(p->infors);
			   	}
			   	p=p->snext;
			}
		}
		int main(){
			int chon;
			do{
				cout<<"\t\t\t\t\t\t==========>MENU<=========="<<endl;
				cout<<"\t\t\t\t\t\t1. Quan ly sach."<<endl;
				cout<<"\t\t\t\t\t\t2. Quan ly nhan vien."<<endl;
				cout<<"\t\t\t\t\t\t0. Thoat."<<endl;
				cout<<"\t\t\t\t\t\tBan chon!"<<endl;
				cin>>chon;
				if(chon==1){
					int c2;
					sach sa;
					khoitaos(S);
					do{
						cout<<"\t\t\t\t==========>MENU<=========="<<endl;
						cout<<"\t\t\t\t1. Doc DS tu file."<<endl;
						cout<<"\t\t\t\t2. Nhap DS sach."<<endl;
						cout<<"\t\t\t\t3. In DS sach."<<endl;
						cout<<"\t\t\t\t4. Luu DS sach vao file."<<endl;
						cout<<"\t\t\t\t5. Tong so luong sach."<<endl;
						cout<<"\t\t\t\t6. Hien thi thong tin sach o dau danh sach."<<endl;
						cout<<"\t\t\t\t7. Dem so luong sach cung nha xuat ban."<<endl;
						cout<<"\t\t\t\t8. Dem so luong sach duoc xuat ban vao nam x."<<endl;
						cout<<"\t\t\t\t9. Hien thong tin sach co so luong it nhat."<<endl;
						cout<<"\t\t\t\t10. Hien thong tin sach co so luong nhieu nhat."<<endl;
						cout<<"\t\t\t\t11. Hien thong tin nhung sach co don gia trong khoang."<<endl;
						cout<<"\t\t\t\t12. Tim theo ten sach."<<endl;
						cout<<"\t\t\t\t13. Xoa thong tin sach o dau danh sach."<<endl;
						cout<<"\t\t\t\t0. Thoat!"<<endl;
						cout<<"\t\t\t\t Ban chon:";
						cin>>c2;
						switch(c2){
							case 1:
								docfsach(S);
								break;
							case 2:
								nhapdssach(S);
								break;
							case 3:
								hiendssach(S);
								break;
							case 4:
								luufsach(S);
								break;	
							case 5:
								cout<<"Tong so luong sach: "<<sumslg(S)<<endl;
								break;	
							case 6:
								top(S);
								break;
							case 7:
								samenxb(S);
								break;
							case 8:
								sameyear(S);
								break;
							case 9:
								hienmins(S);
								break;
							case 10:
								hienmaxs(S);
								break;
							case 11:
								hieng1g2(S);
								break;
							case 12:
								searchtens(S);
								break;
							case 13:
								pops(S);
								cout<<"Danh sach sach sau khi xoa dau: "<<endl;
								hiendssach(S);
								break;
							case 0:
								break;
							default :
								cout<<"Ban chon sai!Moi ban chon lai!"<<endl;
								break;
						}
					}
					while(c2!=0);
			}
			else if(chon==2){
				int c1;
				nhanvien nv;
				khoitaonv(NV);
				do{
					cout<<"\t\t\t\t==========>MENU<=========="<<endl;
					cout<<"\t\t\t\t1. Doc DS nhan vien tu file."<<endl;
					cout<<"\t\t\t\t2. Nhap DS nhan vien."<<endl;
					cout<<"\t\t\t\t3. In DS nhan vien."<<endl;
					cout<<"\t\t\t\t4. Luu DS nhan vien vao file."<<endl;
					cout<<"\t\t\t\t5. Tong luong nhan vien."<<endl;
					cout<<"\t\t\t\t6. Dem so nhan vien co do tuoi trong khoang."<<endl;
					cout<<"\t\t\t\t7. In ra nhan vien dau DS."<<endl;
					cout<<"\t\t\t\t8. Hien nhan vien co luong cao nhat."<<endl;
					cout<<"\t\t\t\t9. Hien nhan vien co luong thap nhat."<<endl;
					cout<<"\t\t\t\t10. Xoa nhan vien dau danh sach."<<endl;
					cout<<"\t\t\t\t0. Thoat!"<<endl;
					cout<<"\t\t\t\t Ban chon:";
					cin>>c1;
					switch(c1){
						case 1:
							docfnv(NV);
							break;
						case 2:
							nhapdsnv(NV);
							break;
						case 3:
							hiendsnv(NV);
							break;
						case 4:
							luufnv(NV);
							break;
						case 5:
							cout<<"Tong luong:"<<sumluong(NV);
							break;
						case 6:
							demnv(NV);
							break;
						case 7:
							topnv(NV);
							break;
						case 8:
							hienmax(NV);
							break;
						case 9:
							hienmin(NV);
							break;
						case 10:
							pop(NV);
							cout<<"Danh sach sau khi xoa dau:"<<endl;
							hiendsnv(NV);
							break;
						case 0:
							break;
							default :
								cout<<"Ban chon sai!Moi ban chon lai!"<<endl;
								break;
						}
					}
					while(c1!=0);
			}else if(chon==0){
				break;
			}else{
				cout<<"Ban chon sai!Moi ban chon lai!"<<endl;
			}
		}
		while(true);				
	}
			
