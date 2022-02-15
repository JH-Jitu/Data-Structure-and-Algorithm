class Point {
  constructor(x, y) {
    this.data = [{ x: x }];
  }
}

const merge = (leftArray, rightArray, array) => {
  const lengthOfLeftArray = leftArray.length;
  const lengthOfRightArray = rightArray.length;

  let i, j, k;

  i = 0;
  j = 0;
  k = 0;

  while (i < lengthOfLeftArray && j < lengthOfRightArray) {
    if (leftArray[i] < rightArray[j]) {
      array[k] = leftArray[i];
      i++;
    } else {
      array[k] = rightArray[j];
      j++;
    }
    k++;
  }

  while (i < lengthOfLeftArray) {
    array[k] = leftArray[i];
    i++;
    k++;
  }

  while (j < lengthOfRightArray) {
    array[k] = rightArray[j];
    j++;
    k++;
  }
};

// Merge Sort
const mergeSort = (array) => {
  const lengthOfArray = array.length;
  if (lengthOfArray < 2) {
    return;
  }
  const mid = lengthOfArray / 2;

  let leftArray = new Array(mid);
  let rightArray = new Array(lengthOfArray - mid);

  for (let i = 0; i < mid; i++) {
    leftArray[i] = array[i];
  }
  for (let i = mid; i < lengthOfArray; i++) {
    rightArray[i - mid] = array[i];
  }

  mergeSort(leftArray);
  mergeSort(rightArray);

  merge(leftArray, rightArray, array);
};

// const array = [5, 6, 10];
// console.log(array.length);

const workingFunction = () => {
  const array = [8, 7, 6, 5, 4, 3, 2, 1];

  console.log(array);

  // After sorting =>
  mergeSort(array);
  console.log(array);
};

workingFunction();

const n = 100000;
const roll_Num = 220121352;
const point = new Point();
let i;
let t = roll_Num - 100;

// for (i = 0; i < n; i++) {
//   point[i].x = i;
//   point[i].y = t;
//   if (i % 2 == 1) {
//     t = (t * 2 + i) % roll_Num;
//   }
// }

// console.log("Smallest 10 points are: ");
// for (let i = 0; i < 10; i++) {
//   console.log(`${point[i].x}: ${point[i].y}`);
// }

point.data[0].x = 10;
point.data[1].x = 10;
point.data[2].x = 10;

console.log(point);
