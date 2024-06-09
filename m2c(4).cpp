#include <stdio.h>
#include <math.h>

int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	int a[n][m];
//	int b[n][m];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	for(int i=0;i<n;i++){	
//		for(int j=0;j<m;j++){
//			scanf("%d",&b[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}	
//	//tong cua hai ma tran	
//	int c[n][m];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			printf("%d ",c[i][j]);
//		}
//		printf("\n");
//	}
//	//hieu cua hai ma tran.
//		int d[n][m];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			d[i][j] = a[i][j] - b[i][j];
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			printf("%d ",d[i][j]);
//		}
//		printf("\n");
//	}
//	
	//nhan 2 ma tran.
//	int n,m,p;
//	scanf("%d %d %d",&n,&m,&p);
//	int a[n][m],b[m][p],c[m][p];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(int i=0;i<m;i++){
//		for(int j=0;j<p;j++){
//			scanf("%d",&b[i][j]);
//		}
//	}
//	for(int i = 0;i<n;i++){
//		for(int j=0;j<p;j++){
//			//tinh toan c[i][j]
//			c[i][j] = 0;
//			//k la so phep tinh ( cot cua a bang hang cua b )
//			for(int k = 0; k<m;k++){
//				c[i][j] += a[i][k] * b[k][j];
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<p;j++){
//			printf("%d ",c[i][j]);
//		}
//		printf("\n");
//	}
	
	//nhan 1 ma tran voi ma tran chuyen vi cua no
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][m],b[m][n],c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			b[j][i] = a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j] = 0;
			for(int k = 0; k < m ;k++){
				c[i][j] += a[i][k] * b[k][j]; // cho nay bang a[i][k] * a[j][k]
				//khoi xay dung ma tran chuyen vi
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}














