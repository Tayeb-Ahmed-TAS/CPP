# Map

- Map is an associative array.

A map in C++ STL is an associative container which stores key value pairs. To elaborate, a map stores a key of some data type and its corresponding values of some data type. For example: a teacher wants to store the marks of students which in future can be accessed by their names. Here, keys are the student names, and their marks are the corresponding values. Refer to the illustration below:

![Map Illustration](https://github.com/Tayeb-Ahmed-TAS/Images/blob/b167183e26902ce042f77a5ff2708a3200fb7928/map.png)

- The keys in a map are unique. That means, a key can only be present once in a map. If you try to insert a key that already exists in the map, the value corresponding to that key will be updated with the new value.

## Header File

```cpp
#include <map>
```

## The syntax for declaring a map is

```cpp
map <data_type_of_key,   data_type_of_value>  map_name;
```

## Syntax for inserting elements in a map

```cpp
map_name[key] = value;
```

## Syntax for accessing elements in a map

```cpp
map_name[key];
```

## Syntax for deleting elements in a map

```cpp
map_name.erase(key);
```

## Syntax for finding elements in a map

```cpp
map_name.find(key);
```

## Syntax for checking if a key exists in a map

```cpp
map_name.count(key); // It returns 1 if the key exists, otherwise 0.
```

## Syntax for checking the size of a map

```cpp
map_name.size();
```

## Syntax for checking if a map is empty

```cpp
map_name.empty(); // It returns true if the map is empty, otherwise false.
```

## Syntax for clearing a map

```cpp
map_name.clear();
```

## Syntax for iterating over a map

```cpp
for (auto it = map_name.begin(); it != map_name.end(); it++)
{
    cout << it->first << " " << it->second << endl;
}
```

Or,

```cpp
for (auto it = map_name.begin(); it != map_name.end(); it++)
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
```

## Syntax for using **.insert()** method

```cpp
map_name.insert({pair_1, pair_2... .. pair_n});
```

## Example for .insert() method

```cpp
// map_name.insert({{key1, value1}, {key2, value2}, {key3, value3}});

map_name.insert({{"Shorna", 9}, {"Taskin", 26}, {"Tabassum", 61}});
```

## Syntax for updating a value in a map

```cpp
map_name[key] = new_value;
```

[Reference](https://cplusplus.com/reference/map/map/)
