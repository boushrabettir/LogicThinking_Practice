# Remove Duplicates and Return k

```js
/**
 * @param {number[]} nums
 * @return {number}
 */

const removeDuplicates = (nums) => {
    /*
    Initial Thoughts

    We can maybe say if the element 0 is equal to elemet 1,
    then we push that element 1 to the array
    if 0 == 0 -> [0]
    if 0 == 1 -> continue
    if 1 == 1 -> [0, 1]
    We then need to check if the array contains that value
    if 1 == 1 && arr.contains(index) -> continue
*/
    let j = 0;
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] !== nums[j]) {
            /* 
                [1,1,2]
                1 !== 1
                1.     0
                2 !== 1
                --> [1]
                2 !== 2
                --> j + 1
                we know j = 1
                [j, j+1]
                --> [1, 2]
             */
            j++;
            nums[j] = nums[i];
        }
    }
    return j + 1;

}

```
