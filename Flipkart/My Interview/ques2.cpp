int getCheapestResult(int n, int k, int arr[][3]) {
    vector<vector<int>> edges;
    for (int i = 0; i < k; i++) {
        int u = arr[i][0];
        int v = arr[i][1];
        int cost = arr[i][2] / 2;  // Fix: half the cost for one-way trip
        edges.push_back({cost, u, v});
    }

    sort(edges.begin(), edges.end());

    vector<int> parent(n);
    for (int i = 0; i < n; i++) parent[i] = i;

    function<int(int)> find = [&](int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    };

    auto unite = [&](int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            parent[a] = b;
            return true;
        }
        return false;
    };

    int result = 0, edgesUsed = 0;

    for (auto& edge : edges) {
        int cost = edge[0], u = edge[1], v = edge[2];
        if (unite(u, v)) {
            result += cost;
            edgesUsed++;
        }
        if (edgesUsed == n - 1) break;
    }

    if (edgesUsed != n - 1) return -1;
    return result;
}
