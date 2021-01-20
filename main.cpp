#include "idcludes.h"

int main()
{
    ///1 uzduotis
  map<string, int> zodziai;
  ifstream file("tekstas.txt");
  string word;
  while (file >> word)
  {

     for (auto simboliai : word){
            if (ispunct(simboliai)){
                word.erase(word.find_first_of(simboliai));}}
     if (zodziai.find(word) != zodziai.end())
     {
       zodziai[word]++;
     }
     else
     {
       zodziai[word] = 1;
     }
  }
    file.close();
  std:: ofstream G;
    G.open("lentele.txt", std::ios::out);
    G<< std::left << std::setw(15)<<"Zodis"
       <<  std::left << std::setw(15)<< "Pasikartojimu skaicius"<<endl;
    map<string, int>::iterator it;
    for (it = zodziai.begin(); it != zodziai.end(); ++it)
    {
        G <<std::left << std::setw(20)<< it->first
        <<std::left << std::setw(20)<<it->second<<endl;
    }
    G.close();
    ///2 Uzduotis
    ifstream read("url.txt");
  string words;
  string pirmas = "www.";
  string antras = "http";
  string trecias = ".com";
  std:: ofstream D;
  D.open("adresai.txt", std::ios::out);
  while (read>> words)
  {
      if ((words.find(pirmas)!= string::npos)|| (words.find(antras)!= string::npos) || (words.find(trecias) != string::npos))
            D<< words<<endl;
  }
  D.close();

    ///3 Uzduotis
  std::string str;
  int counter=0;
  vector<vector<int>> la;
  vector<int> sk;
  vector<string> lo;
  map<string, int>::iterator it2;
    for (it2 = zodziai.begin(); it2 != zodziai.end(); ++it2){
    if (it2->second >1){
            ifstream gg("tekstas.txt");
    while (std::getline(gg, str)){
        counter+=1;
        if (str.find(" "+it2->first) != std::string::npos) {
            sk.push_back(counter);
  }}
  gg.close();
  counter=0;
  la.push_back(sk);
  lo.push_back(it2->first);
  sk.clear();}
    }
    std:: ofstream last;
  last.open("table.txt", std::ios::out);
  int aa = maks(zodziai);
  last<<std::left << std::setw(15)<<"Zodis";
        for (int j=0; j<aa; j++){
            last<<std::left << std::setw(8)<<j+1;
        }
    last<<endl;

   for (int i=0; i<la.size();i++){
        last<<std::left << std::setw(15)<<lo[i];
        for (int j=0; j<la[i].size(); j++){
            last<<std::left << std::setw(7)<<la[i][j]<<" ";
        }
    last<<endl;
    }


  return 0;

}
