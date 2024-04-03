#include <iostream>
#include <vector>

/**
 * Merge K Sorted Lists
 * Brute force approach
 * https://leetcode.com/problems/merge-k-sorted-lists/
 *
 * Created: 2024-04-03
 * Updated: 2024-04-03
 * Author: Ditra Amadia
 *
 * O(n^2) time complexity
 * 195ms runtime
 */

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
  ListNode *mergeKLists(std::vector<ListNode *> &lists)
  {
    if (lists.empty())
      return NULL;
    if (lists.size() < 2)
      return lists.front();

    ListNode *dummy = new ListNode();
    ListNode *iterator = dummy;

    while (true)
    {
      int min = INT_MAX;
      int minIndex = -1;

      // Find the minimum value from each list head
      for (int i = 0; i < lists.size(); i++)
      {
        if (lists[i] == nullptr)
          continue;

        if (lists[i]->val < min)
        {
          min = lists[i]->val;
          minIndex = i;
        }
      }

      // If all lists are empty, break the loop
      if (minIndex == -1)
        break;

      // Add the minimum value to the result list
      iterator->next = new ListNode(min);
      iterator = iterator->next;
      lists[minIndex] = lists[minIndex]->next;
    }

    ListNode *result = dummy->next;
    delete dummy;
    return result;
  }
};