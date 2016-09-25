#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n,m,pos;
struct node{
	int u,v,w;
}e[500001];
struct queue{
	int Q[500001];	
	int head;
	int rear;
	queue(){
		head=0;
		rear=0;
	}
}q;

void push(int v){
	q.rear++;
	q.Q[q.rear]=v;
}

int top(){
	return q.Q[q.head];
}

void pop(){
	q.head++;
}
bool empty(){
	return q.head==q.rear;
}
bool cmp(node a,node b){
	if(a.u!=b.u){
		return a.u<b.u;
	}else{
		return a.v<b.v;
	}
}


int main(){
	scanf("%d%d%d",&n,&m,&pos);
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&e[i].u,&e[i].v,&e[i].w);
	}
	sort(e,e+m,cmp);
	
	return 0;
}



