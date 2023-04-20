There are **n** students in a class. They are very close to each other. Today is their semester final exam.     
Somehow they manage the security system of the exam hall. In the exam hall when they get their exam paper they become shocked as their questions were very hard. In their class is a genius guy at position **s**. He can answer all the questions. He can supply his answer papers copy after **t** minutes from starting of the exam. If student ***u*** is connected to ***v***, it takes ***t<sub>i</sub>*** minutes to pass the answer sheet form student ***u*** to student ***v***. The duration of the exam is T minutes. You have to determine if it is possible to pass the answer sheet to all of the students before the exam ends.<br>
**Some students may not be connected with anyone.**
#### Input   
The first line contains four integers ***n (1≤n≤10<sup>5</sup>)*** — the number of students ,**T (1 ≤ x ≤ 240)** duration of the exam, **t(1 ≤ t ≤ 1000)** - time needs the genius student to complete the exam, **s** position of the genius student **m(1≤ m ≤ 10<sup>5</sup>)** number of connections between students.    
Each of the following **m** lines contain four integers  **u, v, w (1 ≤ a, b ≤ n)** , **(1 ≤ w ≤ 1000)**. .      
#### Output     
Print an integer - **x** the number of students who will pass in the exam. 