/*
  vector<int> a;
  sort(a.begin(),a.end());//排序
  alls.erase(unique(a.begin(),a.end()),a.end());//去重

  //二分
  int find(int x){
    int l=0;r=a.size()-1;
    while(l<r)
    {
        int mid=l+r>>1;
        if(a[mid]>=x)   r=mid;
        else l=mid+1;
        return r+1;
    }
}


  
  
  
  
  
  
  
  
  
  
  
  
  
  */