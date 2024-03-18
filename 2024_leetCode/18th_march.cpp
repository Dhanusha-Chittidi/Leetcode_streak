/*

Author : Dhanusha Chittidi
Problem : 452. Minimum Number of Arrows to Burst Balloons
Question Link(Leetcode) : https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/


*/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size(),i=0,count=0;
        
        sort(points.begin(),points.end(),[](vector<int>&p1,vector<int>&p2){
            
             if(p1[0]==p2[0]) return p1[1]<p2[1];
            else return p1[0] <p2[0];
        });
        
        while(i<n-1 && points[i][1]<points[i+1][0] ){
            count++;
            i++;
        }
        
        if(i==n-1) count++;
        int new1=points[i][0];
        int new2=points[i][1];
        i++;
        while(i<n){
            while(i<n && points[i][0]<=new2){
                new1=max(new1,points[i][0]);
                new2=min(new2,points[i][1]);
                i++;
            }
            count++;
            if(i<n){
              new1=points[i][0];
              new2=points[i][1];
              i++;
              if(i==n) count++;
            }
        }
        return count;
        
        
        
    }
};