class Solution:
    def findShortestSubArray(self, nums: List[int]) -> int:
        dict = {}
        # on remplit le dictionnaire avec les valeurs de nums
        # dict contient le nombre d'occurences de chaque valeur,
        # l'index de la première occurence et l'index de la dernière occurence
        for i in range(len(nums)):
            if nums[i] in dict:
                dict[nums[i]][0] += 1
                dict[nums[i]][2] = i
            else:
                dict[nums[i]] = [1, i, i]
        maxFreq = 0
        minLen = 0
        # on parcourt le dictionnaire pour trouver la valeur de maxFreq
        # et la longueur minimale de la sous-liste
        for key in dict:
            if dict[key][0] > maxFreq:
                maxFreq = dict[key][0]
                minLen = dict[key][2] - dict[key][1] + 1
            elif dict[key][0] == maxFreq:
                minLen = min(minLen, dict[key][2] - dict[key][1] + 1)
        return minLen