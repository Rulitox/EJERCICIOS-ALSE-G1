#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mapa;

    for (int i = 0; i < nums.size(); i++) {
        int complemento = target - nums[i];

        if (mapa.find(complemento) != mapa.end()) {
            return {mapa[complemento], i};
        }

        mapa[nums[i]] = i;
    }

    return {};
}

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Ingrese los numeros: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Ingrese el target: ";
    cin >> target;

    vector<int> resultado = twoSum(nums, target);

    cout << "Indices: [" << resultado[0] << ", " << resultado[1] << "]" << endl;

    return 0;
}
