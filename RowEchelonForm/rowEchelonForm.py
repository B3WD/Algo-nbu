def print_mtrx(mtrx):
	for i, row in enumerate(mtrx):
		for _, val in enumerate(row):
			print(f"{val:.3f}", end="\t")
		print()


def make_UTF(mtrx):
	n, m = len(mtrx), len(mtrx[0])
	for i, row in enumerate(mtrx):
		deli = row[i]

		# make [i, i] = 1
		for j in range(m):
			row[j] /= deli

		#null col
		for j in range(i + 1, n):
			mul = mtrx[j][i]
			for k in range(m):
				mtrx[j][k] -= mtrx[i][k] * mul

	return mtrx


mtrx = [[2,	0, 9, 134],
		[9,	-3, 7, 12],
		[6,	8, 5, -36]]

mtrx_utf = make_UTF(mtrx)

print_mtrx(mtrx)