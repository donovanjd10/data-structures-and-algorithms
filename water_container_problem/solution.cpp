class Solution {
public:
    int maxArea(vector<int>& height) {
 
   
  int maxContainerArea = 0;
  int currentLeft = 0;
  int currentRight = height.size() - 1;
  
  while(currentLeft != currentRight){



    int left = height[currentLeft];
    int right = height[currentRight];
    
    int minHeight = std::min(left,right);
    int dist = currentRight - currentLeft;

    int currentArea = minHeight * dist;
    maxContainerArea = maxContainerArea > currentArea ? maxContainerArea: currentArea;

    if(minHeight == left){
      currentLeft+=1;
    }else{
      currentRight-=1;
    }
  }
  

  return maxContainerArea;
};
};
