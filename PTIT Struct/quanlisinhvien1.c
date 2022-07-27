#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct qlsv {
	int code;
	char name[100];
	float p1, p2, p3, total;
};
int comparator(const void *p, const void *q) 
{
    int l = ((struct qlsv *)p)->total;
    int r = ((struct qlsv *)q)->total; 
    return (l - r);
}
int main() {
	struct qlsv ds[100];
	int n, q;
	int cnt = 0;
	while (1) {
		scanf("%d", &q);
		if (q == 1) {
			scanf("%d", &n);
			printf("%d\n", n);
			for (int i = cnt; i < n + cnt; i++) {
				ds[i].code = i + 1;
				scanf(" %[^\n]", ds[i].name);
				scanf("%f%f%f", &ds[i].p1, &ds[i].p2, &ds[i].p3);
				ds[i].total = ds[i].p1 + ds[i].p2 + ds[i].p3;
			}
			cnt += n;
			continue;
		}
		if (q == 2) {
			scanf("%d\n", &n);
			printf("%d\n", n);
			scanf(" %[^\n]", ds[n - 1].name);
			scanf("%f%f%f", &ds[n - 1].p1, &ds[n - 1].p2, &ds[n - 1].p3);
			ds[n - 1].total = ds[n - 1].p1 + ds[n - 1].p2 + ds[n - 1].p3;
			continue;
		}
		if (q == 3) {
			qsort((void*)ds, cnt, sizeof(ds[0]), comparator);
			for(int i = 0; i < cnt; ++i)
				printf("%d %s %0.1f %0.1f %0.1f\n", 
					ds[i].code, ds[i].name, ds[i].p1, ds[i].p2, ds[i].p3);
			break;
		}
	}
	return 0;
}
