#include <stdio.h>
#define maxc 100

int n;
int a[maxc][maxc];//Mang luu chi phi khi di qua tung thanh pho.
int visited[maxc]; // Danh dau da di qua thanh pho hay chua.
int path[maxc]; //luu hanh trinh da di qua thanh pho do hay chua.
int best_path[maxc]; //mang luu hanh trinh tot nhat.
int min_cost = 10000; // so tien tot nhat de di qua cac thanh pho.


void docFile () {
	FILE * f;
	f = fopen("Dulich.inp","r");
	if(f == NULL) {
		printf("khong the mo file!");
	}
	fscanf(f,"%d\n",&n);
	printf("%d\n", n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			fscanf(f,"%d", &a[i][j]);
			if(a[i][j]  == 0 && i != j) {
				a[i][j] = -1;
			}
		}
		fscanf(f,"\n");
	}
	fclose(f);
}

void xuatMaTran() {
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void theBest(int current_city, int count, int cost) {
	if(count == n) {
		if(cost + a[current_city][0] < min_cost) {
			min_cost = cost + a[current_city][0];
			//Luu hanh trinh tot nhat
			for(int i = 0; i < n; i++){
				best_path[i] = path[i];
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(!visited[i] && a[current_city][i] != -1) {
			visited[i] = 1;
			path[count] = i + 1;
			theBest(i, count + 1, cost + a[current_city][i]);
			visited[i] = 0;
		}
	}
}

void ghifile() {
	FILE *f;
	f = fopen("Dulich.out","w");
	if(f == NULL) {
		printf("khong the mo file");
	}
	fprintf(f,"%d\n",min_cost);
	for(int i = 1; i <= n; i++) {
		fprintf(f,"%d ",best_path[i]);
	}
	fprintf(f,"\n");
	
	fclose(f);
}

int main() {
	docFile();
	xuatMaTran();
	for(int i = 1; i <= n; i++){
		visited[i] = 0;
	}
	visited[1] = 1;
	path[1] = 1;
	theBest(0,1,0);
	if(min_cost == 10000){
		return 0;
	} else{
		ghifile();
		printf("%d ",min_cost);
	}
	return 0;
}
