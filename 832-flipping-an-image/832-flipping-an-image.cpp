class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int k=0;
        for(vector v:image)
        {
            for(int j = 0; j <= (v.size() - 1) / 2; j++)
            {
                int temp = v[j];
               v[j] = !v[v.size() - j - 1];
            v[v.size() - j - 1] = !temp;
             //   cout<<v[j]<<" ";
            }
          //  cout<<endl;
            image[k]=v;
            k++;
        }
        
        return image;
    }
};