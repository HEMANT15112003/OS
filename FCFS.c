#include<stdio.h>
int
main ()
{
  int i, n, bt[10], at[10], tat[10], wt[10], comp = 0;
  float avgtat = 0,avgwt = 0, totaltat = 0, totalwt = 0;
  printf ("enter the number of process : ");
  scanf ("%d", &n);
  printf ("enter the burst time :\n");
  for (i = 0; i < n; i++)
    {
      printf ("enter burst time for process-%d:", i + 1);
      scanf ("%d", &bt[i]);
      printf ("\n");
    }
  printf ("enter the arrival time :\n");
  for (i = 0; i < n; i++)
    {
      printf ("enter the arrival time for process-%d:", i + 1);
      scanf ("%d", &at[i]);
      printf ("\n");
    }
  // cal tat
  for (i = 0; i < n; i++)
    {
      comp = comp + bt[i];
      tat[i] = comp - at[i];
      totaltat = (float) totaltat + tat[i];
    }
  avgtat = (float)totaltat/n;
  // cal wait time
  for (i = 0; i < n; i++)
    {
      wt[i] = tat[i] - bt[i];
      totalwt = totalwt + wt[i];
    }
  avgwt = (float) totalwt / n;

  printf
    ("process_id\t burst_time\t arrival_time\t turnaround_time\t wait_time\n");
  for (i = 0; i < n; i++)
    {
      printf ("%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d\n", i+1, bt[i], at[i], tat[i],
	      wt[i]);
    }
  printf ("avg waiting time : %f\n", avgwt);
  printf ("avg turnaround time : %f", avgtat);
}
