class Solution
{
public:  
    map<char,int> mapdata;
    vector<char> vdata;
  //Insert one char from stringstream
    void Insert(char ch)
    {
        vdata.push_back(ch);
        mapdata[ch]++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
    	vector<char>::iterator iter;
        for(iter = vdata.begin();iter != vdata.end();++iter)
        {
            if(mapdata[*iter] == 1)
                return *iter;
        }
        return '#';
    }

};
