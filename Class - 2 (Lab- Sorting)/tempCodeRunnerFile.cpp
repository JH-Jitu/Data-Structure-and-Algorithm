int partition(int *array, int low, int high)
{
    int left, right, pivotItem;
    pivotItem = array[low];
    pivotItem = left = low;
    right = high;
    while (left < right)
    {
        while (array[left] <= pivotItem)
        {
            left++;
        }
        while (array[right] >= pivotItem)
        {
            right--;
        }
        if (left < right)
        {
            swap(left, right);
        }
    }

    // Right is final position for pivot
    array[low] = array[right];
    array[right] = pivotItem;
    return right;
}
