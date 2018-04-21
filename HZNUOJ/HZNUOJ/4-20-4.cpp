//¡¾CÏµÁĞ5.17¡¿Êı×Ö×Ö·û´®
/*#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	scanf("%s",a);
	scanf("%s",b);
	int ay,am,ad;
	int by,bm,bd;
	if(strlen(a)==18){
		ay=(int)(a[6]-48)*1000+(int)(a[7]-48)*100+(int)(a[8]-48)*10+(int)(a[9]-48);
		am=(int)(a[10]-48)*10+(int)(a[11]-48);
		ad=(int)(a[12]-48)*10+(int)(a[13]-48);
	}
	if(strlen(b)==18){
		by=(int)(b[6]-48)*1000+(int)(b[7]-48)*100+(int)(b[8]-48)*10+(int)(b[9]-48);
		bm=(int)(b[10]-48)*10+(int)(b[11]-48);
		bd=(int)(b[12]-48)*10+(int)(b[13]-48);
	}
	if(strlen(a)==15){
		ay=1000+900+(int)(a[6]-48)*10+(int)(a[7]-48);
		am=(int)(a[8]-48)*10+(int)(a[9]-48);
		ad=(int)(a[10]-48)*10+(int)(a[11]-48);
	}
	if(strlen(b)==15){
		by=1000+900+(int)(b[6]-48)*10+(int)(b[7]-48);
		bm=(int)(b[8]-48)*10+(int)(b[9]-48);
		bd=(int)(b[10]-48)*10+(int)(b[11]-48);
	}
	if(ay<by){
		printf("1\n");
		return 0;
	}
	else if(ay>by){
		printf("-1\n");
		return 0;
	}
	else{
		if(am<bm){
		printf("1\n");
		return 0;
		}
		else if(am>bm){
		printf("-1\n");
		return 0;
		} 
		else{
			if(ad<bd){
		printf("1\n");
		return 0;
		}
		else if(ad>bd){
		printf("-1\n");
		return 0;
		} 
		else{
			printf("0\n");
		return 0;
		}
		}
	}
	return 0;
}*/