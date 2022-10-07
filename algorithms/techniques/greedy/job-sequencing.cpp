#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Job {
  char id;
  int dead;
  int profit;
};

struct jobProfit {
  bool operator()(Job const& a, Job const& b) {
    return (a.profit < b.profit);
  }
};

void solve(vector<Job> arr) {
  vector<Job> result;

  // sort job by deadline
  sort(arr.begin(), arr.end(), [](Job a, Job b) { return a.dead < b.dead; });
  
  priority_queue<Job, vector<Job>, jobProfit> pq;
  for (int i = arr.size() - 1; i >= 0; i--) {
    int slot_available;
    if (i == 0)
      slot_available = arr[i].dead;
    else
      slot_available = arr[i].dead - arr[i - 1].dead;
    pq.push(arr[i]);
    while (slot_available > 0 && pq.size() > 0) {
      Job job = pq.top();
      pq.pop();
      slot_available--;
      result.push_back(job);
    }
  }
  sort(result.begin(), result.end(), [&](Job a, Job b) { return a.dead < b.dead; });

  for (int i = 0; i < result.size(); i++) cout << result[i].id << ' ';
  cout << endl;
}

int main() {
  vector<Job> jobs = {
      {'a', 2, 100},
      {'b', 1, 19},
      {'c', 2, 27},
      {'d', 1, 25},
      {'e', 3, 15}};
  solve(jobs);
  return 0;
}
