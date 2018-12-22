/*
A hotel manager has to process N advance bookings of rooms for the next season. His hotel has K rooms. 
Bookings contain an arrival date and a departure date.
He wants to find out whether there are enough rooms in the hotel to satisfy the demand.

Input:
First list for arrival time of booking.
Second list for departure time of booking.
Third is K which denotes count of rooms.

Output:
A boolean which tells whether its possible to make a booking. 
Return 0/1 for C programs.
O -> No there are not enough rooms for N booking.
1 -> Yes there are enough rooms for N booking.
*/

bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

   vector<pair<int,int>> list;
   
   int i, count;
   count =0;
   for(i=0; i<arrive.size(); i++)
   {
       list.push_back(make_pair(arrive[i],1));
       list.push_back(make_pair(depart[i],0));
   }
  sort(list.begin(), list.end());
  for(i=0; i<list.size(); i++)
  {
      if(list[i].second == 1)
      {
          count += 1;
          if(count > K)
          {
              return 0;
          }
      }
      else 
      {
          count -= 1;
      }
  }
  return 1;
  
}
