#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <random>
#include <iomanip>
#include <ctime>
#include <map>

class Data
{
private:
    std::vector<std::string> ship ={
        "Emma",	"Noah", "Olivia", "Liam",
        "Sophia","Mason", "Ava", "Jacob",
        "Isabella",	"William", "Mia", "Ethan",
        "Abigail",	"James", "Emily", "Alexander",
        "Charlotte", "Michael", "Harper", "Benjamin",
        "Madison", "Elijah", "Amelia", "Daniel",
        "Elizabeth", "Aiden", "Sofia", "Logan",
        "Evelyn", "Matthew", "Avery", "Lucas",
        "Chloe", "Jackson", "Ella",	"David",
        "Grace", "Oliver", "Victoria", "Jayden",
        "Aubrey", "Joseph", "Scarlett", "Gabriel",
        "Zoey",	"Samuel", "Addison", "Carter",
        "Lily",	"Anthony", "Lillian", "John",
        "Natalie", "Dylan", "Hannah", "Luke",
        "Aria", "Henry", "Layla", "Andrew",
        "Brooklyn",	"Isaac", "Alexa", "Christopher",
        "Zoe", "Joshua", "Penelope", "Wyatt",
        "Riley", "Sebastian", "Leah", "Owen",
        "Audrey", "Caleb", "Savannah", "Nathan",
        "Allison", "Ryan", "Samantha", "Jack",
        "Nora",	"Hunter", "Skylar",	"Levi",
        "Camila", "Christian", "Anna", "Jaxon",
        "Paisley", "Julian", "Ariana", "Landon",
        "Ellie", "Grayson", "Aaliyah", "Jonathan",
        "Claire", "Isaiah", "Violet", "Charles"
    };
    std::vector<int> number;
    std::vector<std::string> country = {
        "Angola", "Argentina", "Aruba", "Australia",
        "Austria", "Azerbaijan", "Bahamas", "Bahrain",
        "Belgium", "Benin", "Bolivia", "Bonaire",
        "Bosnia-Herzegovina", "Botswana", "Brazil", "Brunei",
        "Bulgaria", "Cambodia", "Cameroon", "Canada",
        "Chile",  "Colombia", "Croatia", "Curacao",
        "Cyprus", "Denmark", "Ecuador", "Estonia",
        "Fiji", "Finland", "France", "Gabon",
        "Germany", "Ghana", "Greece", "Guadaloupe",
        "Guatemala", "Honduras", "Honduras-Tegucigalpa", "Hungary",
        "Iceland", "India", "Indonesia", "Ireland",
        "Israel", "Italy", "Japan", "Kazakhstan",
        "Korea", "Kosovo", "Kuwait", "Latvia",
        "Lesotho", "Lithuania", "Luxembourg", "Macau",
        "Macedonia", "Malaysia", "Martinique", "Mauritania",
        "Mexico", "Moldova", "Namibia", "Netherlands",
        "Nicaragua", "Nigeria", "Norway", "Panama",
        "Paraguay", "Peru", "Philippines", "Poland", "Portugal",
        "Qatar", "Romania", "Russia", "Rwanda",
        "Saba", "Samoa", "Senegal", "Singapore",
        "Slovenia", "Spain"
    };
    std::vector<std::string> type = {
        "Tanker", "Cargo_ship", "Passenger"
    };
    std::vector<std::string> captain = {
        "Bramson Hoggarth",  "Adamson Holiday", "Adderiy Holmes", "Addington Howard",
        "Adrian Jacobson",  "Albertson James", "Aldridge Jeff", "Allford Jenkin",
        "Alsopp Jerome", "Anderson Johnson", "Andrews Jones", "Archibald Keat",
        "Arnold Kelly","Arthurs Kendal", "Atcheson Kennedy", "Attwood Kennett",
        "Audley Kingsman", "Austin Kirk", "Ayrton Laird", "Babcock Lamberts",
        "Backer Larkins", "Baldwin Lawman", "Bargeman Leapman", "Barnes Leman",
        "Barrington Lewin", "Bawerman Little", "Becker Livingston", "Benson Longman",
        "Berrington MacAdam", "Birch MacAlister", "Bishop MacDonald",  "Black Macduff",
        "Blare Macey", "Blomfield Mackenzie", "Boolman Mansfield", "Bootman Marlow",
        "Bosworth Marshman", "Bradberry Mason", "Bradshaw Mathews",
        "Brickman Mercer", "Brooks Michaelson",  "Brown Miers", "Bush Miller",
        "Calhoun Miln", "Campbell Milton", "Carey Molligan", "Carrington Morrison",
        "Carroll Murphy", "Carter Nash", "Chandter Nathan", "Chapman Neal",
        "Charlson Nelson",  "Chesterton Nevill", "Clapton Nicholson",
        "Clifford Nyman", "Coleman Oakman", "Conors Ogden", "Cook Oldman",
        "Cramer  Oldridge", "Creighton Oliver", "Croftoon Osborne", "Crossman Oswald",
        "Daniels Otis", "Davidson Owen", "Day Page", "Dean Palmer",
        "Derrick Parkinson", "Dickinson Parson", "Dodson Pass", "Donaldson Paterson",
        "Donovan Peacock", "Douglas Pearcy", "Dowman Peterson", "Dutton Philips",
        "Duncan Porter", "Dunce Quincy", "Durham Raleigh", "Dyson Ralphs"
    };

public:
    void rand(int& count, std::fstream& F)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(500, 9999);
        F << std::setprecision(2);
        F.seekp(0);

        F << count << "\n";
        for(int i = 1; i<= count; ++i)
        {
            F << ship[trunc(dis(gen) % ship.size())] << " ";
            F << dis(gen) << " ";
            F << country[trunc(dis(gen) % country.size())] << " ";
            F << type[trunc(dis(gen) % type.size())] << " ";
            if(i != count)
                F << captain[trunc(dis(gen) % captain.size())] << "\n";
            else
                F << captain[trunc(dis(gen) % captain.size())];
        }
    }
};

class Ship
{
private:
    std::string ship;
    int number;
    std::string country;
    std::string type;
    std::string captain;
public:
    Ship(){}
    Ship(std::string &ship, int number, std::string &country, std::string &type, std::string &captain)
        :ship(ship), number(number), country(country), type(type), captain(captain){}

    //сеттеры и геттеры
    const std::string& Get_ship() const
    {
        return ship;
    }
    const void Set_ship (std::string& new_ship)
    {
        ship = new_ship;
    }
    const int& Get_number() const
    {
        return number;
    }
    const void Set_number (int& new_number)
    {
        number = new_number;
    }
    const std::string& Get_country() const
    {
        return country;
    }
    const void Set_country (std::string& new_country)
    {
        country = new_country;
    }
    const std::string& Get_type() const
    {
        return type;
    }
    const void Set_type (std::string& new_type)
    {
        type = new_type;
    }
    const std::string& Get_captain() const
    {
        return captain;
    }
    const void Set_captain (std::string& new_captain)
    {
        captain = new_captain;
    }

    //перегрузки операторов сравнения
    bool operator < (const Ship& other) const
    {
        if(ship < other.ship)
            return true;
        if((ship == other.ship) && (type < other.type))
            return true;
        return (ship == other.ship) && (type == other.type) && (number < other.number);
    }
    bool operator > (const Ship& other) const
    {
        return !(*this < other);
    }
    bool operator == (const Ship& other) const
    {
        return (ship == other.ship) && (type == other.type) && (number == other.number);
    }
    bool operator <= (const Ship& other) const
    {
        return (*this < other) || (*this == other);
    }
    bool operator >= (const Ship& other) const
    {
        return !(*this <= other);
    }

    //перегрузка операторов для поиска
    bool operator == (const std::string& other) const
    {
        return ship == other;
    }
    bool operator < (const std::string& other) const
    {
        return ship < other;
    }
    bool operator > (const std::string& other) const
    {
       return !(ship < other);
    }
};

//Операторы ввода/вывода для класса Ship
std::ostream& operator<< (std::ostream& out, const Ship& stroka) {
    out << stroka.Get_ship() << "\n"
        << stroka.Get_number() << "\n"
        << stroka.Get_country() << "\n"
        << stroka.Get_type() << "\n"
        << stroka.Get_captain() << "\n";
    return out;
}
std::istream& operator>> (std::istream& in, Ship& stroka) {
    std::string ship = "";
    int number = 0;
    std::string country = "";
    std::string type = "";
    std::string captain_fn = "";
    std::string captain_sn = "";

    in >> ship;
    in >> number;
    in >> country;
    in >> type ;
    in >> captain_fn;
    in >> captain_sn;
    stroka.Set_ship(ship);
    stroka.Set_number(number);
    stroka.Set_country(country);
    stroka.Set_type(type);
    std::string string1 = captain_fn + " " + captain_sn;
    stroka.Set_captain(string1);
    return in;
}

template<class T>
void DownHeap(std::vector<T>& v, long k, long n)
{
    long new_index = k;
    T elem;

    while ((2 * k + 1) < n)
    {
        if (v[new_index] < v[2 * k + 1])
            new_index = 2 * k + 1;

        if (((2 * k + 2) < n) && (v[new_index] < v[2 * k + 2]))
            new_index = 2 * k + 2;

        if (new_index != k)
        {
           elem = v[k];
            v[k] = v[new_index];
            v[new_index] = elem;
            k = new_index;
        }else {
            break;
        }
    }
}

template<class T>
void heapSort(std::vector<T>& v)
{
    long length = v.size();
    T x;
    for (int i = 0; i <= length / 2 - 1; i++)
        DownHeap(v, length / 2 - i - 1, length);

    for (int i = 0; i < length -1; i++)
    {
        x = v[0];
        v[0] = v[length - i - 1];
        v[length - i - 1] = x;
        DownHeap(v, 0, length - i - 1);
    }
}

template <class T>
std::vector<T> BinSearch(std::vector<T>& v, std::string& key)
{
    std::vector<T> vect;
    long begin = v.size(), end = v.size() - 1;
    long left = 0;
    long right = v.size();
    long mid, mid_1;

    while (left <= right)
    {
       mid = left + (right - left)/2;
       if(v[mid] == key)
       {
           mid_1 = mid;
           while((v[mid] == key) && (mid >= 0)) // идём влево, пока значения элемента и ключа совпадают
           {
               begin = mid;
               --mid;
           }
           while((v[mid_1] == key) && (mid_1 <= v.size())) // идём влево, пока значения элемента и ключа совпадают
           {
               end = mid_1;
               ++mid_1;
           }
           break;
       }
       if(v[mid] < key)
           left = mid + 1;
       if(v[mid] > key)
           right = mid - 1;
       if((right <= 0) || (left >= v.size()))
           break;
    }

    for(long i = begin; i <= end; ++i) //записываем все элементы, совпавшие с key
        vect.push_back(v[i]);

    if(vect.size() == 0)
        std::cout << "Element not found in BinSearch " << "\n";

    return vect;
}

template <class T>
std::vector<T> linSearch (std::vector<T>& v, std::string& key)
{
    std::vector<T> vect;
    for(long i = 0; i < v.size(); ++i)
    {
        if(v[i] == key)
            vect.push_back(v[i]);
    }
    //heapSort<Ship>(vect); // для упорядочивания найденный элементов
    if(vect.size() == 0)
        std::cout << "Element not found in linSearch " << "\n";
    return vect;
}

void cmp_poisk(std::vector<Ship>& ship_1, std::vector<Ship>& ship_2,
               std::multimap<std::string,Ship>& map, int n)
{
    std::vector<Ship> poisk_1; //для записи найденных элементов по ключу
    std::string key = "Emma";
    int start1, start2;

    std::cout << "Number of str = " << n << "\n" << "\nCравнение времени выполнения linSearch и BinSearch+время сортировки\n";
    //сравнение времени выполнения linSearch и BinSearch+время сортировки
    start1 = clock();
    linSearch<Ship>(ship_1, key);
    start1 = clock() - start1;

    start2 = clock();
    heapSort<Ship>(ship_1);
    BinSearch<Ship>(ship_1, key);
    start2 = clock() - start2;
    std::cout << "Время выполнения linSearch = " << ((float)start1) / CLOCKS_PER_SEC << " секунд"  << "\n"
              << "Время выполнения BinSearch + сортировка = " << ((float)start2) / CLOCKS_PER_SEC << " секунд"  << "\n" << "\nCравнение времени выполнения linSearch и BinSearch\n";

    //сравнение времени выполнения linSearch и BinSearch
    start1 = clock();
    linSearch<Ship>(ship_2, key);
    start1 = clock() - start1;

    start2 = clock();
    BinSearch<Ship>(ship_1, key);
    start2 = clock() - start2;
    std::cout << "Время выполнения linSearch = " << ((float)start1) / CLOCKS_PER_SEC << " секунд"  << "\n"
              << "Время выполнения BinSearch = " << ((float)start2) / CLOCKS_PER_SEC << " секунд"  << "\n" << "\nCравнение времени выполнения BinSearch и map\n";

   //сравнение времени выполнения BinSearch и map
    start1 = clock();
    BinSearch<Ship>(ship_1, key);
    start1 = clock() - start1;

    start2 = clock();

    auto keyRange = map.equal_range(key);
    for(auto it = keyRange.first; it != keyRange.second; ++it)
    {
        poisk_1.push_back(it->second);
    }

    if(poisk_1.size() == 0)
        std::cout << "Element not found in map" << "\n";
    start2 = clock() - start2;
    std::cout << "Время выполнения BinSearch = " << ((float)start1) / CLOCKS_PER_SEC << " секунд"  << "\n"
              << "Время выполнения map = " << ((float)start2) / CLOCKS_PER_SEC << " секунд"  << "\n\n";
}

int main()
{
    std::vector<Ship> ship_1, ship_2;
    std::multimap<std::string,Ship> map;
    Ship stroka;
    int count = 500;
    std::fstream F("/home/user/Desktop/moy.txt", std::ios::in | std::ios::out | std::ios::trunc);

    Data a;
    a.rand(count, F);
    F.seekg(0);

    int n;
    F >> n;
    for(int i = 0; i < n; ++i)
    {
        F >> stroka; //считываем полностью строку из файла
        ship_1.push_back(stroka);
        ship_2.push_back(stroka);
        map.insert(make_pair(stroka.Get_ship(),stroka));
    }

    cmp_poisk(ship_1, ship_2, map, n); // функция сравнения по поиску
    F.close();
    return 0;
}
