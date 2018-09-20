#include<stdio.h>
int move(int a[],int b[]){
	int tmp[54],j=0;
	for(j=0;j<54;j++){
		tmp[*(b+j)-1]=*(a+j);
	}
	for(j=0;j<54;j++){
		*(a+j)=tmp[j];
	}
	return 0;
}
int main(){
	int n,t[54],i;
	int init[54];
	scanf("%d",&n);
	for(i=0;i<54;i++){
		scanf("%d",&t[i]);
		init[i]=i+1;
	}
	for(i=0;i<n;i++){
		move(init,t);
	}
	for(i=0;i<54;i++){
		if(init[i]<14){
			printf("S%d",init[i]);
		}
		else if(init[i]<27){
			printf("H%d",init[i]-13);
		}
		else if(init[i]<40){
			printf("C%d",init[i]-26);
		}
		else if(init[i]<53){
			printf("D%d",init[i]-39);
		}
		else if(init[i]<54){
			printf("J%d",init[i]-52);
		}
		else{
			printf("J%d",init[i]-52);
		}
		if(i<53){
			putchar(' ');
		}
	}
	return 0;
}
