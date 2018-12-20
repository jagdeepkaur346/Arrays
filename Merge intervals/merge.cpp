/*Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start times.

Example 1:

Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

Example 2:

Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].
*/
bool compare(Interval a,Interval b)
 {
     return a.start<=b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {

    int i,j,n=intervals.size();
    int b=newInterval.start;
    int e=newInterval.end;
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),compare);
    
    i=1,j=0;
    while(i<intervals.size())
    {
        if(intervals[j].end>=intervals[i].start)
        {
            //merge
            intervals[j].end=max(intervals[i].end,intervals[j].end);
        }
        else
        {
            j++;
            intervals[j]=intervals[i];
        }
        i++;
    }
    intervals.erase(intervals.begin()+j+1,intervals.end());
    return intervals;
}
