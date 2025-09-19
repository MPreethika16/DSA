class Path{
    public:
        vector<int>parent;
        Path(int n){
            parent.resize(n+1);
            for(int i=1;i<=n;i++){
                parent[i]=i;
            }
        }

        int findSet(int a){
            if(a==parent[a]){
                return a;
            }
            return parent[a]=findSet(parent[a]);

        }

        void merge(int u,int v){
            int leadU=findSet(u);
            int leadV=findSet(v);

            if(leadU!=leadV){
                parent[leadV]=leadU;
            }
        }
};


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();

        Path p(n+1);
        vector<int>degree(n+2,0);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            p.merge(u,v);
            degree[u]++;
            degree[v]++;

        }
        for(int i=0;i<degree.size();i++){
            if(degree[i]>1){
                return i;
            }
        }
        return 0;
    }
};