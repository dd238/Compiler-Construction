#include <string>
#include <iostream>
#include <fstream>
#include <streambuf>
#include <cstddef>        // std::size_t
#include <vector>

using namespace std;

ifstream finWildcard;
void ifWildcardHelper(int ind, bool doubleA);


// #1: check to see if 'a' is within file
vector<int> singleCharSearch()
{
    // open file
  ifstream file;
  file.open("a.txt");

  // result indexes
  vector<int> indexes;
  char c;
  int ind = 1;

  // check that file opens correctly
  if (!file.is_open()) {
    cout << "[Error]: Failed to open input file...";
  }

  // check to see if 'a' is within file and return indexes if it is
  while ((c = file.get()) != EOF) {
  // 'a' is within file, add it's index to vector
    if (c == 'a') {
      indexes.push_back(ind);
    }
    // incremend index
    ind++;
  }

  // print indexes where 'a' is within file
  cout << "Indexes of 'a' in file: " << endl;;
  for (auto i = indexes.cbegin(); i != indexes.cend(); ++i)
    cout << *i << " ";
  cout << endl;
  return indexes;
}

// #2: check to see if 'ab' is in the sequence
vector<int> abCharSearch()
{
  vector<int> indexes;
  char letter;
  int ind = 1;
  ifstream fin;

  fin.open("ab.txt");

  if (fin.is_open()) {
    while (!fin.eof()) {
      fin.get(letter);
      if(letter == 'a') {
        ind++;
      }
      if(letter == 'b') {
        indexes.push_back(ind);
        ind++;
      }
    }
  }
  fin.close();

  for (auto i = indexes.cbegin(); i != indexes.cend(); ++i)
    cout << *i << " ";
  cout << endl;
  return indexes;
}

//#3: check to see if 'aa' is in the sequence
vector<int> aaCharSearch()
{
  vector<int> indexes;
  char letter;
  int ind = 1;
  ifstream fin;
  bool previousA = false;

  fin.open("aa.txt");

  if (fin.is_open())
  {
    while (!fin.eof())
    {
      fin.get(letter);
      if(letter == 'a')
      {
        if (previousA == true)
        {
          indexes.push_back(ind);
        }
        fin.get(letter);
        ind++;
        if(letter == 'a' && !fin.eof())
        {
          previousA = true;
          indexes.push_back(ind);
          ind++;
        }
        else
        {
          previousA = false;
          ind++;
        }
      }
      else
      {
        previousA = false;
        ind++;
      }
    }
  }
  fin.close();

  for (auto i = indexes.cbegin(); i != indexes.cend(); ++i)
    cout << *i << " ";
  cout << endl;
  return indexes;
}

// #4: check to see if abc is in the sequence
vector<int> abcCharSearch()
{
  vector<int> indexes;
    char letter;
    int ind = 1;
    ifstream fin;

    fin.open("abc.txt");

    if (fin.is_open()) {
        while (!fin.eof()) {
            fin.get(letter);
            if(letter == 'a') {
                fin.get(letter);
                ind++;
                if(letter == 'b') {
                    fin.get(letter);
                    ind++;
                    if(letter == 'c') {
                        indexes.push_back(ind);
                        ind++;
                    }
                    else
                        ind++;
                }
                else
                    ind++;
            }
            else
                ind++;
        }
    }
    fin.close();

    for (auto i = indexes.cbegin(); i != indexes.cend(); ++i)
            cout << *i << " ";
    cout << endl;
    return indexes;
}


vector<int> wildCardSearch()
{
  vector<int> indexes;
  char letter;
  int ind = 1;
  ifstream fin;
  bool foundAA1 = false;
  bool foundAA2 = false;
  fin.open("aa*.txt");

  if (fin.is_open()) 
  {
    while (!fin.eof()) 
    {
      fin.get(letter);
      if(letter == 'a' && !fin.eof()) 
      {
        fin.get(letter);
        ind++;
        if(letter == 'a') 
        {
          if(foundAA1 == true && foundAA2 == true)
          {
            foundAA2 = false;
          }
          if(foundAA1 == true)
          {
            indexes.push_back(ind);
            foundAA2 = true;
            cout << "aa2: " << ind << endl;
          }
          else
          {
            cout << "aa1: " << ind << endl;
            foundAA1 = true;
          }
          ind++;
        }           
        else
        {
          foundAA2 = false;
          ind++;
        }
      }
      else
      {
        if(foundAA1 == true)
          foundAA2 = false;
        else
          foundAA1 == false;
        ind++;
      }
    }
  }
    fin.close();

    for (auto i = indexes.cbegin(); i != indexes.cend(); ++i)
        cout << *i << " ";
    cout << endl;
    return indexes;
}


int main() {

  // #1
  vector<int> results1 = singleCharSearch();
  // #2
  vector<int> results2 = abCharSearch();
  // #3
  vector<int> results3 = aaCharSearch();
  // #4
  vector<int> results4 = abcCharSearch();
  // #5
  vector<int> results5 = wildCardSearch();
  // #6
  //vector<int> results6 = aabCharSearch();


    return 0;
}
