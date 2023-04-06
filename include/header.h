#ifndef header_h
#define header_h

#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;
struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

template<typename T>
extern void print_1d_array(T toprint);

template<typename T>
void print_1d_array(T toprint){
    for (auto it : toprint) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    std::cout << "------------------"<<std::endl;
}

template<typename T>
void print_2d_array(T toprint);
template<typename T>
void print_2d_array(T toprint){
    
    for(auto row : toprint){
        for (auto it : row) {
            std::cout << it <<" ";
        }
        std::cout << std::endl;
    }
    std::cout << "------------------"<<std::endl;
}

std::vector<std::vector <int> > threeSum(std::vector<int> & nums);
void hello();
std::vector<std::string> letterCombinations(std::string );
int reverse(int);
int search(std::vector<int>&, int);
int firstBadVersion(int);
int searchInsert(std::vector<int>&, int);
std::vector<int> sortedSquares(std::vector<int>& );
void rotate(std::vector<int> &, int);
void moveZeroes(std::vector<int> &);
std::vector<int> twoSum(std::vector<int> &, int);
void reversestdstring(std::vector<char>&);
std::string reverseWords(std::string);
int lengthOfLongestSubstdstring(std::string s);
bool checkInclusion(std::string s1, std::string s2);
std::vector<std::vector<int> > floodFill(std::vector<std::vector<int> >&, int , int , int);
int maxAreaOfIsland(std::vector<std::vector<int> >&);
//TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2);
//ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
std::vector<std::vector<int> > combine(int n, int k);
std::vector<std::vector<int> > permute(std::vector<int>& nums) ;
bool canArrange(std::vector<int>& arr, int k);
int maxSubArray(std::vector<int>& nums);
double myPow(double x, int n);
int orangesRotting(std::vector<std::vector<int> >& grid);
std::vector<std::vector<int> > updateMatrix(std::vector<std::vector<int> >& mat);
std::vector<std::string> letterCasePermutation(std::string s);
int hammingWeight(uint32_t n);
bool isPowerOfTwo(int n);
int climbStairs(int n);
int singleNumber(std::vector<int>& nums);
uint32_t reverseBits(uint32_t n);
int minimumTotal(std::vector<std::vector<int> >& triangle);
int fib(int n);
int minCostClimbingStairs(std::vector<int>& cost);
int robb(std::vector<int> &nums);
int deleteAndEarn(std::vector<int>& nums);
int jump_ii(std::vector<int>& nums);
void sortColors(std::vector<int>& nums);
bool wordBreak(std::string s, std::vector<std::string>& wordDict);
int maxIncreaseKeepingSkyline(std::vector<std::vector<int> >& grid);
bool isPowerOfThree(int n );
std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2);
std::vector<std::string> findRepeatedDnaSequences(std::string s);
int jump(std::vector<int>& nums);
int maxSubarraySumCircular(std::vector<int>& nums);
int maxProduct(std::vector<int> &nums);
int maxScoreSightseeingPair(std::vector<int> &nums);
int maxProfit(std::vector<int> &nums);
int maxProfit_ii(std::vector<int> &nums);
int getMaxLen(std::vector<int>& nums);
int maxProfit_iii(std::vector<int> &nums, int fee);
int maxProfit_iiii(std::vector<int> &nums);
int numberOfArithmeticSlices(std::vector<int>& nums);
int numDecodings(std::string s);
int trap(std::vector<int>& height);
int nthUglyNumber(int n );
std::vector<std::vector<int> > generate(int numRows);
std::vector<int> getRow(int numRows);
int minFallingPathSum(std::vector<std::vector<int> >& matrix);
std::vector<std::vector<int> > matrixBlockSum(std::vector<std::vector<int> >& mat, int k);
int uniquePaths(int m, int n);
//int uniquePathsWithObstacles(std::vector<std::vector<int> >& obstacleGrid);
int minPathSum(std::vector<std::vector<int> >& grid);
int maximalSquare(std::vector<std::vector<char> >& matrix);
int lengthOfLastWord(std::string s);
std::string toGoatLatin(std::string sentence);
int mySqrt(int x);
int majorityElement(std::vector<int> & nums);
bool canFinish(int numCourses, std::vector<std::vector<int> > & prerequisites);
double findMaxAverage(std::vector<int>& nums, int k);
int totalFruit(std::vector<int>& fruits);
std::vector<int> dailyTemperatures(std::vector<int>& temperatures);
void bubblesort(std::vector<int>& vec);
void quicksort(std::vector<int>& vec, int low, int high);
void Quick_sort(int left,int right,std::vector<int> arr);
void QuickSort(std::vector<int> &A, int low, int high);
bool buddystdstrings(std::string s, std::string goal);
int minDeletionSize(std::vector<std::string>& strs);
bool oneEditAway(std::string first, std::string second);
int maxArea(std::vector<int>& height);
int minStickers(std::vector<std::string>& stickers, std::string target);
double largestTriangleArea(std::vector<std::vector<int> > &points);
std::vector<int> intersectii(std::vector<int>& nums1, std::vector<int>& nums2) ;
void insertionSort(std::vector<int> &vec);
bool isAlienSorted(std::vector<std::string>& words, std::string order);
int findKthNumber(int m, int n ,int k);
int minMove2(std::vector<int> &nums);
std::vector<int> findRightInterval(std::vector<std::vector<int> >& intervals);
int repeatedNTimes(std::vector<int> &nums);
bool canIWin(int maxChoosableInteger, int desiredTotal);
int cutOffTree(std::vector<std::vector<int> >& forest);
int findSubstdstringInWraproundstdstring(std::string p);
std::vector<int> fallingSquares(std::vector<std::vector<int> >& positions);
int findClosest(std::vector<std::string>& words, std::string word1, std::string word2);
std::string removeOuterParentheses(std::string s);
std::string validIPAddress(std::string queryIP);
int maxProfit_iv(std::vector<int>& prices);
bool makesquare(std::vector<int>& matchsticks);
int consecutiveNumbersSum(int n);
std::string alienOrder(std::vector<std::string>& words);
int numUniqueEmails(std::vector<std::string>& emails);
//class MyCalendarThree;
int minEatingSpeed(std::vector<int>& piles, int h);
bool isBoomerang(std::vector<std::vector<int> >& points);
int distinctSubseqII(std::string s);
int countPalindromicSubsequences(std::string s);
bool isPalindrome(std::string s);
int minFlipsMonoIncr(std::string s);;
int maxScore(std::string s);
std::vector<std::string> findAndReplacePattern(std::vector<std::string>& words, std::string pattern);
int heightChecker(std::vector<int> &heights);
//oid printSubsequence(std::string input, std::string output);
std::vector<int> findDiagonalOrder(std::vector<std::vector<int> >& mat);
int canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost);
int longestValidParentheses(std::string s);
int smallestDistancePair(std::vector<int>& nums, int k);
int findPairs(std::vector<int>& nums, int k);
void duplicateZeros(std::vector<int>& arr) ;
int findLUSlength(std::vector<std::string>& strs);
//std::vector<int> findFrequentTreeSum(TreeNode* root) ;
//int findBottomLeftValue(TreeNode* root);
int minCost(std::vector<std::vector<int> >& costs);
void wiggleSort(std::vector<int>& nums);
int numPrimeArrangements(int n);
int nextGreaterElement(int n);
//std::vector<std::vector<int> > minimumAbsDifference;
int evaluate(std::string expression);
std::string replaceWords(std::vector<std::string>& dictionary, std::string sentence);
int minCostToMoveChips(std::vector<int>& position);
int longestCommonSubsequence(std::string text1, std::string text2) ;
std::vector<int> searchRange(std::vector<int>& nums, int target);
int lenLongestFibSubseq(std::vector<int>& arr) ;
int cherryPickup(std::vector<std::vector<int> >& grid) ;
std::string replaceSpace(std::string s);
std::string reverseLeftWords(std::string s, int n);
int coinChange(std::vector<int>& coins, int amount) ;
int maximum_subarray(std::vector<int> &nums);
int lengthOfLIS(std::vector<int>& nums) ;
int findRepeatNumber(std::vector<int> &nums);
int getMinimumTime(std::vector<int>& time, std::vector<std::vector<int> >& fruits, int limit);
int missingNumber(std::vector<int>& nums);
int search2(std::vector<int>& nums, int target) ;
int oddCells(int m, int n, std::vector<std::vector<int> >& indices);
int minArray(std::vector<int> &nums);
bool findNumberIn2DArray(std::vector<std::vector<int> >& matrix, int target);
int minArray(std::vector<int> &nums);
char firstUniqChar(std::string s) ;
int perfectMenu(std::vector<int>& materials, std::vector<std::vector<int> >& cookbooks, std::vector<std::vector<int> >& attribute, int limit);
int maximumBags(std::vector<int>& capacity, std::vector<int>& rocks, int additionalRocks);

std::vector<int> asteroidCollision(std::vector<int>& asteroids);
int numIslands(std::vector<std::vector<char> >& grid);;
std::vector<std::string> reorderLogFiles(std::vector<std::string>& logs);
std::vector<std::vector<int> > kClosest(std::vector<std::vector<int> >& points, int k);
std::string longestPalindrome(std::string s);
std::string mostCommonWord(std::string paragraph, std::vector<std::string>& banned) ;
bool containsNearbyAlmostDuplicate(std::vector<int>& nums, int k, int t);
std::vector<int> partitionLabels(std::string s);
std::vector<int> prisonAfterNDays(std::vector<int>& cells, int n) ;
int subarraySum(std::vector<int>& nums, int k);
int largestVariance(std::string s);
int totalStrength(std::vector<int>& strength);
std::vector<std::string> wordBreakii(std::string s, std::vector<std::string>& wordDict);
void QuickSort(std::vector<int>& vec, int low, int high);
std::vector<int> twoSum2(std::vector<int>& numbers, int target);

int wordCount(std::vector<std::string>& startWords, std::vector<std::string>& targetWords);
bool isAnagram(std::string s, std::string t);
std::vector<int> findAnagrams(std::string s, std::string p);
std::vector<std::string> findRelativeRanks(std::vector<int>& score);
std::vector<int> constructArray(int n, int k);
int minOperations(std::vector<std::string>& logs);
bool containsDuplicate(std::vector<int>& nums);
int missingNumber2(std::vector<int>& nums) ;
bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);
bool search3(std::vector<int>& nums, int target);
int specialArray(std::vector<int>& nums);
int maximumSwap(int num);
int findPeakElement(std::vector<int>& nums);
double trimMean(std::vector<int>& arr);
int bulbSwitch(int n);
int rectangleArea(std::vector<std::vector<int>>& rectangles);
int maxLengthBetweenEqualCharacters(std::string s) ;
int largestIsland(std::vector<std::vector<int>>& grid);
std::vector<int> frequencySort(std::vector<int>& nums);
std::string convert(std::string s, int numRows);
bool canPartitionKSubsets(std::vector<int>& nums, int k) ;
std::vector<int> missingTwo(std::vector<int>& nums);
bool isPerfectSquare(int num);
int peakIndexInMountainArray(std::vector<int>& arr);
int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d);
std::vector<int> findOrder(int numCourses, std::vector<std::vector<int>>& prerequisites);
std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target);
void nextPermutation(std::vector<int>& nums);
bool isHappy(int n);
int findDuplicate(std::vector<int>& nums) ;
std::string interpret(std::string command);
int findContentChildren(std::vector<int>& g, std::vector<int>& s);
std::vector<std::vector<int>> findWinners(std::vector<std::vector<int>>& matches);
int numTimesAllBlue(std::vector<int>& flips);
bool validPartition(std::vector<int>& nums);
std::string addBinary(std::string a, std::string b);
std::string multiply(std::string num1, std::string num2);
std::vector<int> nextGreaterElements(std::vector<int>& nums);
std::vector<int> finalPrices(std::vector<int>& prices);
int numSubmat(std::vector<std::vector<int>>& mat);
bool exist(std::vector<std::vector<char>>& board, std::string word);
int numTilings(int n);
int minSubArrayLen(int target, std::vector<int>&nums );
std::vector<int> productExceptSelf(std::vector<int>& nums);
bool checkSubarraySum(std::vector<int>& nums, int k);
double largestSumOfAverages(std::vector<int>& nums, int k);
int findLength(std::vector<int>& nums1, std::vector<int>& nums2) ;
int sumSubseqWidths(std::vector<int>& nums);
double champagneTower(int poured, int query_row, int query_glass);
double soupServings(int n);
bool PredictTheWinner(std::vector<int>& nums);
int nthMagicalNumber(int n, int a, int b);
int countBalls(int lowLimit, int highLimit);
int hIndex(std::vector<int>& citations);
int arrangeCoins(int n);
int numSubarrayBoundedMax(std::vector<int>& nums, int left, int right);
int expressiveWords(std::string s, std::vector<std::string>& words);
int search4(std::vector<int>& nums, int target);
int reachableNodes(std::vector<std::vector<int>>& edges, int maxMoves, int n);
bool check(std::vector<int>& nums);
//int lengthOfLongestSubstd::string(std::string s);
int longestOnes(std::vector<int>& nums, int k) ;
int subarraysDivByK(std::vector<int>& nums, int k);
bool carPooling(std::vector<std::vector<int>>& trips, int capacity);
std::vector<int> corpFlightBookings(std::vector<std::vector<int>>& bookings, int n);
int shortestBridge(std::vector<std::vector<int>>& grid);
std::vector<int> findRedundantDirectedConnection(std::vector<std::vector<int>>& edges);
int maxSumAfterPartitioning(std::vector<int>& arr, int k);
bool canPartition(std::vector<int>& nums);
int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) ;
//void template_checker(std::vector<T> answer, std::vector<T> input);
int findMinArrowShots(std::vector<std::vector<int>>& points);
int minimumSwap(std::string s1, std::string s2);
bool checkPowersOfThree(int n);
int minimumLengthEncoding(std::vector<std::string>& words);
int numDistinct(std::string s, std::string t);
int calculate(std::string s);
std::vector<std::string> basicCalculatorIV(std::string expression, std::vector<std::string>& evalvars, std::vector<int>& evalints);
int getMaximumConsecutive(std::vector<int>& coins);
bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity);
std::vector<std::string> alertNames(std::vector<std::string>& keyName, std::vector<std::string>& keyTime);
//std::vector<std::string> alertNames(std::vector<std::string>& keyName, std::vector<std::string>& keyTime);
int tallestBillboard(std::vector<int>& rods);
void gameOfLife(std::vector<std::vector<int>>& board);
std::string rearrangestdstring(std::string s, int k);
int minSumOfLengths(std::vector<int>& arr, int target);
std::vector<std::string> generateParenthesis(int n);
std::string largestNumber(std::vector<int>& nums);
int fillCups(std::vector<int>& amount);
std::string alphabetBoardPath(std::string target);
int balancedstdstring(std::string s);
bool isGoodArray(std::vector<int>& nums);
std::vector<int> numberOfPairs(std::vector<int>& nums);
std::string bestHand(std::vector<int>& ranks, std::vector<char>& suits);
std::vector<int> circularPermutation(int n, int start);
int largest1BorderedSquare(std::vector<std::vector<int>>& grid);
int movesToMakeZigzag(std::vector<int>& nums);
std::vector<std::vector<int>> mergeSimilarItems(std::vector<std::vector<int>>& items1, std::vector<std::vector<int>>& items2);
std::vector<std::vector<int>> largestLocal(std::vector<std::vector<int>>& grid);
std::string printBin(double num);
int minimumDeletions(std::string s);
std::vector<std::string> braceExpansionII(std::string expression);
int maxValue(std::vector<std::vector<int>>& grid);
std::string findLexSmalleststdstring(std::string s, int a, int b);
int numDupDigitsAtMostN(int n);
std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target);
std::string maskPII(std::string s);
std::vector<int> prevPermOpt1(std::vector<int>& arr);
int mergeStones(std::vector<int>& stones, int k);

#endif
